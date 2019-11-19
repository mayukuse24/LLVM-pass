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
        
        for (Module::iterator F = M.begin(), e = M.end(); F != e; ++F) {               
          for(Function::iterator bb = F->begin(), e = F->end(); bb != e; ++bb) {                
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i!=e; ++i) {                    
              // check whether instruction is actually a call
              if (CallInst* ci = dyn_cast<CallInst>(i))  {
                // Extracting a target (callee)
                Value* target = ci->getCalledValue()->stripPointerCasts();                        
                Function* f = dyn_cast<Function>(target);
                errs() << F->getName() << " --> " << f->getName() << " (@" << ci->getName() << ")\n";                
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

