//===- MyLLVMPass.cpp - Example code from "Writing an LLVM Pass" ---------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements two versions of the LLVM "Hello World" pass described
// in docs/WritingAnLLVMPass.html
//
//===----------------------------------------------------------------------===//

#define DEBUG_TYPE "hello"
#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Function.h"
#include "llvm/Pass.h"
#include "llvm/Support/raw_ostream.h"

#include <llvm/Pass.h>
#include <llvm/PassManager.h>
#include <llvm/ADT/SmallVector.h>
#include <llvm/Analysis/Verifier.h>
#include <llvm/Assembly/PrintModulePass.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/CallingConv.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/GlobalVariable.h>
#include <llvm/IR/InlineAsm.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/Support/FormattedStream.h>
#include <llvm/Support/MathExtras.h>
#include <algorithm>

#include "llvm/IR/IRBuilder.h"

using namespace llvm;

StringRef fname;

namespace {
  // Hello - The first implementation, without getAnalysisUsage.
  struct MyLLVMPass : public ModulePass {
    static char ID; // Pass identification, replacement for typeid
      
    MyLLVMPass() : ModulePass(ID) {
    }
    
    virtual bool runOnModule(Module &M) {
        
        bool changed = false;

        GlobalVariable* gvar_int32_my_global_var = new GlobalVariable(/*Module=*/M, 
        /*Type=*/IntegerType::get(M.getContext(), 32),
        /*isConstant=*/false,
        /*Linkage=*/GlobalValue::ExternalLinkage,
        /*Initializer=*/0, // has initializer, specified below
        /*Name=*/"my_global_var");

        gvar_int32_my_global_var->setAlignment(4);
        
        // Constant Definitions
        ConstantInt* const_int32_2 = ConstantInt::get(M.getContext(), APInt(32, StringRef("0"), 10));
        ConstantInt* const_int32_3 = ConstantInt::get(M.getContext(), APInt(32, StringRef("1"), 10));

        // Global Variable Definitions
        gvar_int32_my_global_var->setInitializer(const_int32_2);

        // Get function func_log_msg
        Function* func_main = M.getFunction("main");
        Function* func_log_call_count = M.getFunction("log_call_count");
        Function* func_log_msg = M.getFunction("log_msg");

        for (Module::iterator F = M.begin(), e = M.end(); F != e; ++F) {               
          for(Function::iterator bb = F->begin(), e = F->end(); bb != e; ++bb) {                
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i!=e; ++i) {                    
              // Check whether instruction is actually a call
              if (CallInst* ci = dyn_cast<CallInst>(i))  {
                // Create call instruction to log_msg and insert before current call instruction
                if (dyn_cast<Function>(F) != func_log_msg && dyn_cast<Function>(F) != func_log_call_count) { // Avoid adding call instruction inside func_log_msg
                  // Extracting a target (callee)
                  Value* target = ci->getCalledValue()->stripPointerCasts();
                  Function* f = dyn_cast<Function>(target);

                  std::string callerToCallee = (F->getName() + " --> " + f->getName() + " (@" + ci->getName() + ")").str();
                  errs() << callerToCallee << "\n";

                  IRBuilder<> IncrementBuilder(i);
                  Value *param1 = IncrementBuilder.CreateGlobalStringPtr(callerToCallee.c_str(), ".str");
                  CallInst* callLogMsg = IncrementBuilder.CreateCall(func_log_msg, param1);

                  LoadInst* temp_int32_1 = IncrementBuilder.CreateAlignedLoad(gvar_int32_my_global_var, 4, false, "");
                  errs() << *(temp_int32_1) << "\n";
                  Value* temp_int32_2 = IncrementBuilder.CreateAdd(temp_int32_1, const_int32_3, "");
                  IncrementBuilder.CreateAlignedStore(temp_int32_2, gvar_int32_my_global_var, 4, false);                  
                }
              }

              if (dyn_cast<Function>(F) == func_main) {
                if (ReturnInst* ri = dyn_cast<ReturnInst>(i)) {
                  IRBuilder<> CallBuilder(i);
                  LoadInst* temp_int32_3 = CallBuilder.CreateAlignedLoad(gvar_int32_my_global_var, 4, false, "");
                  CallBuilder.CreateCall(func_log_call_count, temp_int32_3);
                }
              }
            }
          }  
        } 

        return changed;
    }
  };
}

char MyLLVMPass::ID = 0;
static RegisterPass<MyLLVMPass> X("MyLLVMPass", "MyLLVMPass");

