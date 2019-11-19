// Generated by llvm2cpp - DO NOT MODIFY!

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
using namespace llvm;

Module* makeLLVMModule();

int main(int argc, char**argv) {
  Module* Mod = makeLLVMModule();
  verifyModule(*Mod, PrintMessageAction);
  PassManager PM;
  PM.add(createPrintModulePass(&outs()));
  PM.run(*Mod);
  return 0;
}


Module* makeLLVMModule() {
 // Module Construction
 Module* mod = new Module("foobar.bc", getGlobalContext());
 mod->setDataLayout("e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128");
 mod->setTargetTriple("x86_64-unknown-linux-gnu");
 
 // Type Definitions
 ArrayType* ArrayTy_0 = ArrayType::get(IntegerType::get(mod->getContext(), 8), 11);
 
 PointerType* PointerTy_1 = PointerType::get(ArrayTy_0, 0);
 
 ArrayType* ArrayTy_2 = ArrayType::get(IntegerType::get(mod->getContext(), 8), 14);
 
 PointerType* PointerTy_3 = PointerType::get(ArrayTy_2, 0);
 
 ArrayType* ArrayTy_4 = ArrayType::get(IntegerType::get(mod->getContext(), 8), 8);
 
 PointerType* PointerTy_5 = PointerType::get(ArrayTy_4, 0);
 
 ArrayType* ArrayTy_6 = ArrayType::get(IntegerType::get(mod->getContext(), 8), 3);
 
 PointerType* PointerTy_7 = PointerType::get(ArrayTy_6, 0);
 
 ArrayType* ArrayTy_8 = ArrayType::get(IntegerType::get(mod->getContext(), 8), 4);
 
 PointerType* PointerTy_9 = PointerType::get(ArrayTy_8, 0);
 
 StructType *StructTy_struct__IO_FILE = mod->getTypeByName("struct._IO_FILE");
 if (!StructTy_struct__IO_FILE) {
 StructTy_struct__IO_FILE = StructType::create(mod->getContext(), "struct._IO_FILE");
 }
 std::vector<Type*>StructTy_struct__IO_FILE_fields;
 StructTy_struct__IO_FILE_fields.push_back(IntegerType::get(mod->getContext(), 32));
 PointerType* PointerTy_12 = PointerType::get(IntegerType::get(mod->getContext(), 8), 0);
 
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructType *StructTy_struct__IO_marker = mod->getTypeByName("struct._IO_marker");
 if (!StructTy_struct__IO_marker) {
 StructTy_struct__IO_marker = StructType::create(mod->getContext(), "struct._IO_marker");
 }
 std::vector<Type*>StructTy_struct__IO_marker_fields;
 PointerType* PointerTy_13 = PointerType::get(StructTy_struct__IO_marker, 0);
 
 StructTy_struct__IO_marker_fields.push_back(PointerTy_13);
 PointerType* PointerTy_11 = PointerType::get(StructTy_struct__IO_FILE, 0);
 
 StructTy_struct__IO_marker_fields.push_back(PointerTy_11);
 StructTy_struct__IO_marker_fields.push_back(IntegerType::get(mod->getContext(), 32));
 if (StructTy_struct__IO_marker->isOpaque()) {
 StructTy_struct__IO_marker->setBody(StructTy_struct__IO_marker_fields, /*isPacked=*/false);
 }
 
 
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_13);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_11);
 StructTy_struct__IO_FILE_fields.push_back(IntegerType::get(mod->getContext(), 32));
 StructTy_struct__IO_FILE_fields.push_back(IntegerType::get(mod->getContext(), 32));
 StructTy_struct__IO_FILE_fields.push_back(IntegerType::get(mod->getContext(), 64));
 StructTy_struct__IO_FILE_fields.push_back(IntegerType::get(mod->getContext(), 16));
 StructTy_struct__IO_FILE_fields.push_back(IntegerType::get(mod->getContext(), 8));
 ArrayType* ArrayTy_14 = ArrayType::get(IntegerType::get(mod->getContext(), 8), 1);
 
 StructTy_struct__IO_FILE_fields.push_back(ArrayTy_14);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(IntegerType::get(mod->getContext(), 64));
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(PointerTy_12);
 StructTy_struct__IO_FILE_fields.push_back(IntegerType::get(mod->getContext(), 64));
 StructTy_struct__IO_FILE_fields.push_back(IntegerType::get(mod->getContext(), 32));
 ArrayType* ArrayTy_15 = ArrayType::get(IntegerType::get(mod->getContext(), 8), 20);
 
 StructTy_struct__IO_FILE_fields.push_back(ArrayTy_15);
 if (StructTy_struct__IO_FILE->isOpaque()) {
 StructTy_struct__IO_FILE->setBody(StructTy_struct__IO_FILE_fields, /*isPacked=*/false);
 }
 
 
 PointerType* PointerTy_10 = PointerType::get(PointerTy_11, 0);
 
 ArrayType* ArrayTy_16 = ArrayType::get(IntegerType::get(mod->getContext(), 8), 26);
 
 PointerType* PointerTy_17 = PointerType::get(ArrayTy_16, 0);
 
 std::vector<Type*>FuncTy_18_args;
 FunctionType* FuncTy_18 = FunctionType::get(
  /*Result=*/IntegerType::get(mod->getContext(), 32),
  /*Params=*/FuncTy_18_args,
  /*isVarArg=*/false);
 
 std::vector<Type*>FuncTy_20_args;
 FuncTy_20_args.push_back(PointerTy_12);
 FunctionType* FuncTy_20 = FunctionType::get(
  /*Result=*/IntegerType::get(mod->getContext(), 32),
  /*Params=*/FuncTy_20_args,
  /*isVarArg=*/true);
 
 PointerType* PointerTy_19 = PointerType::get(FuncTy_20, 0);
 
 std::vector<Type*>FuncTy_21_args;
 FuncTy_21_args.push_back(IntegerType::get(mod->getContext(), 32));
 FunctionType* FuncTy_21 = FunctionType::get(
  /*Result=*/IntegerType::get(mod->getContext(), 32),
  /*Params=*/FuncTy_21_args,
  /*isVarArg=*/false);
 
 PointerType* PointerTy_22 = PointerType::get(IntegerType::get(mod->getContext(), 32), 0);
 
 PointerType* PointerTy_23 = PointerType::get(FuncTy_18, 0);
 
 PointerType* PointerTy_24 = PointerType::get(FuncTy_21, 0);
 
 std::vector<Type*>FuncTy_25_args;
 FuncTy_25_args.push_back(PointerTy_12);
 FunctionType* FuncTy_25 = FunctionType::get(
  /*Result=*/Type::getVoidTy(mod->getContext()),
  /*Params=*/FuncTy_25_args,
  /*isVarArg=*/false);
 
 PointerType* PointerTy_26 = PointerType::get(PointerTy_12, 0);
 
 std::vector<Type*>FuncTy_28_args;
 FuncTy_28_args.push_back(PointerTy_11);
 FuncTy_28_args.push_back(PointerTy_12);
 FunctionType* FuncTy_28 = FunctionType::get(
  /*Result=*/IntegerType::get(mod->getContext(), 32),
  /*Params=*/FuncTy_28_args,
  /*isVarArg=*/true);
 
 PointerType* PointerTy_27 = PointerType::get(FuncTy_28, 0);
 
 std::vector<Type*>FuncTy_29_args;
 FuncTy_29_args.push_back(IntegerType::get(mod->getContext(), 32));
 FunctionType* FuncTy_29 = FunctionType::get(
  /*Result=*/Type::getVoidTy(mod->getContext()),
  /*Params=*/FuncTy_29_args,
  /*isVarArg=*/false);
 
 
 // Function Declarations
 
 Function* func_foo = mod->getFunction("foo");
 if (!func_foo) {
 func_foo = Function::Create(
  /*Type=*/FuncTy_18,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"foo", mod); 
 func_foo->setCallingConv(CallingConv::C);
 }
 AttributeSet func_foo_PAL;
 {
  SmallVector<AttributeSet, 4> Attrs;
  AttributeSet PAS;
   {
    AttrBuilder B;
    B.addAttribute(Attribute::NoUnwind);
    B.addAttribute(Attribute::UWTable);
    PAS = AttributeSet::get(mod->getContext(), ~0U, B);
   }
  
  Attrs.push_back(PAS);
  func_foo_PAL = AttributeSet::get(mod->getContext(), Attrs);
  
 }
 func_foo->setAttributes(func_foo_PAL);
 
 Function* func_printf = mod->getFunction("printf");
 if (!func_printf) {
 func_printf = Function::Create(
  /*Type=*/FuncTy_20,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"printf", mod); // (external, no body)
 func_printf->setCallingConv(CallingConv::C);
 }
 AttributeSet func_printf_PAL;
 {
  SmallVector<AttributeSet, 4> Attrs;
  AttributeSet PAS;
   {
    AttrBuilder B;
    PAS = AttributeSet::get(mod->getContext(), ~0U, B);
   }
  
  Attrs.push_back(PAS);
  func_printf_PAL = AttributeSet::get(mod->getContext(), Attrs);
  
 }
 func_printf->setAttributes(func_printf_PAL);
 
 Function* func_foobar = mod->getFunction("foobar");
 if (!func_foobar) {
 func_foobar = Function::Create(
  /*Type=*/FuncTy_18,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"foobar", mod); 
 func_foobar->setCallingConv(CallingConv::C);
 }
 AttributeSet func_foobar_PAL;
 {
  SmallVector<AttributeSet, 4> Attrs;
  AttributeSet PAS;
   {
    AttrBuilder B;
    B.addAttribute(Attribute::NoUnwind);
    B.addAttribute(Attribute::UWTable);
    PAS = AttributeSet::get(mod->getContext(), ~0U, B);
   }
  
  Attrs.push_back(PAS);
  func_foobar_PAL = AttributeSet::get(mod->getContext(), Attrs);
  
 }
 func_foobar->setAttributes(func_foobar_PAL);
 
 Function* func_bar = mod->getFunction("bar");
 if (!func_bar) {
 func_bar = Function::Create(
  /*Type=*/FuncTy_21,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"bar", mod); 
 func_bar->setCallingConv(CallingConv::C);
 }
 AttributeSet func_bar_PAL;
 {
  SmallVector<AttributeSet, 4> Attrs;
  AttributeSet PAS;
   {
    AttrBuilder B;
    B.addAttribute(Attribute::NoUnwind);
    B.addAttribute(Attribute::UWTable);
    PAS = AttributeSet::get(mod->getContext(), ~0U, B);
   }
  
  Attrs.push_back(PAS);
  func_bar_PAL = AttributeSet::get(mod->getContext(), Attrs);
  
 }
 func_bar->setAttributes(func_bar_PAL);
 
 Function* func_main = mod->getFunction("main");
 if (!func_main) {
 func_main = Function::Create(
  /*Type=*/FuncTy_18,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"main", mod); 
 func_main->setCallingConv(CallingConv::C);
 }
 AttributeSet func_main_PAL;
 {
  SmallVector<AttributeSet, 4> Attrs;
  AttributeSet PAS;
   {
    AttrBuilder B;
    B.addAttribute(Attribute::NoUnwind);
    B.addAttribute(Attribute::UWTable);
    PAS = AttributeSet::get(mod->getContext(), ~0U, B);
   }
  
  Attrs.push_back(PAS);
  func_main_PAL = AttributeSet::get(mod->getContext(), Attrs);
  
 }
 func_main->setAttributes(func_main_PAL);
 
 Function* func___isoc99_scanf = mod->getFunction("__isoc99_scanf");
 if (!func___isoc99_scanf) {
 func___isoc99_scanf = Function::Create(
  /*Type=*/FuncTy_20,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"__isoc99_scanf", mod); // (external, no body)
 func___isoc99_scanf->setCallingConv(CallingConv::C);
 }
 AttributeSet func___isoc99_scanf_PAL;
 {
  SmallVector<AttributeSet, 4> Attrs;
  AttributeSet PAS;
   {
    AttrBuilder B;
    PAS = AttributeSet::get(mod->getContext(), ~0U, B);
   }
  
  Attrs.push_back(PAS);
  func___isoc99_scanf_PAL = AttributeSet::get(mod->getContext(), Attrs);
  
 }
 func___isoc99_scanf->setAttributes(func___isoc99_scanf_PAL);
 
 Function* func_log_msg = mod->getFunction("log_msg");
 if (!func_log_msg) {
 func_log_msg = Function::Create(
  /*Type=*/FuncTy_25,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"log_msg", mod); 
 func_log_msg->setCallingConv(CallingConv::C);
 }
 AttributeSet func_log_msg_PAL;
 {
  SmallVector<AttributeSet, 4> Attrs;
  AttributeSet PAS;
   {
    AttrBuilder B;
    B.addAttribute(Attribute::NoUnwind);
    B.addAttribute(Attribute::UWTable);
    PAS = AttributeSet::get(mod->getContext(), ~0U, B);
   }
  
  Attrs.push_back(PAS);
  func_log_msg_PAL = AttributeSet::get(mod->getContext(), Attrs);
  
 }
 func_log_msg->setAttributes(func_log_msg_PAL);
 
 Function* func_fprintf = mod->getFunction("fprintf");
 if (!func_fprintf) {
 func_fprintf = Function::Create(
  /*Type=*/FuncTy_28,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"fprintf", mod); // (external, no body)
 func_fprintf->setCallingConv(CallingConv::C);
 }
 AttributeSet func_fprintf_PAL;
 {
  SmallVector<AttributeSet, 4> Attrs;
  AttributeSet PAS;
   {
    AttrBuilder B;
    PAS = AttributeSet::get(mod->getContext(), ~0U, B);
   }
  
  Attrs.push_back(PAS);
  func_fprintf_PAL = AttributeSet::get(mod->getContext(), Attrs);
  
 }
 func_fprintf->setAttributes(func_fprintf_PAL);
 
 Function* func_log_call_count = mod->getFunction("log_call_count");
 if (!func_log_call_count) {
 func_log_call_count = Function::Create(
  /*Type=*/FuncTy_29,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"log_call_count", mod); 
 func_log_call_count->setCallingConv(CallingConv::C);
 }
 AttributeSet func_log_call_count_PAL;
 {
  SmallVector<AttributeSet, 4> Attrs;
  AttributeSet PAS;
   {
    AttrBuilder B;
    B.addAttribute(Attribute::NoUnwind);
    B.addAttribute(Attribute::UWTable);
    PAS = AttributeSet::get(mod->getContext(), ~0U, B);
   }
  
  Attrs.push_back(PAS);
  func_log_call_count_PAL = AttributeSet::get(mod->getContext(), Attrs);
  
 }
 func_log_call_count->setAttributes(func_log_call_count_PAL);
 
 // Global Variable Declarations

 
 GlobalVariable* gvar_array__str = new GlobalVariable(/*Module=*/*mod, 
 /*Type=*/ArrayTy_0,
 /*isConstant=*/true,
 /*Linkage=*/GlobalValue::PrivateLinkage,
 /*Initializer=*/0, // has initializer, specified below
 /*Name=*/".str");
 gvar_array__str->setAlignment(1);
 
 GlobalVariable* gvar_array__str1 = new GlobalVariable(/*Module=*/*mod, 
 /*Type=*/ArrayTy_2,
 /*isConstant=*/true,
 /*Linkage=*/GlobalValue::PrivateLinkage,
 /*Initializer=*/0, // has initializer, specified below
 /*Name=*/".str1");
 gvar_array__str1->setAlignment(1);
 
 GlobalVariable* gvar_array__str2 = new GlobalVariable(/*Module=*/*mod, 
 /*Type=*/ArrayTy_0,
 /*isConstant=*/true,
 /*Linkage=*/GlobalValue::PrivateLinkage,
 /*Initializer=*/0, // has initializer, specified below
 /*Name=*/".str2");
 gvar_array__str2->setAlignment(1);
 
 GlobalVariable* gvar_array__str3 = new GlobalVariable(/*Module=*/*mod, 
 /*Type=*/ArrayTy_4,
 /*isConstant=*/true,
 /*Linkage=*/GlobalValue::PrivateLinkage,
 /*Initializer=*/0, // has initializer, specified below
 /*Name=*/".str3");
 gvar_array__str3->setAlignment(1);
 
 GlobalVariable* gvar_array__str4 = new GlobalVariable(/*Module=*/*mod, 
 /*Type=*/ArrayTy_6,
 /*isConstant=*/true,
 /*Linkage=*/GlobalValue::PrivateLinkage,
 /*Initializer=*/0, // has initializer, specified below
 /*Name=*/".str4");
 gvar_array__str4->setAlignment(1);
 
 GlobalVariable* gvar_array__str5 = new GlobalVariable(/*Module=*/*mod, 
 /*Type=*/ArrayTy_8,
 /*isConstant=*/true,
 /*Linkage=*/GlobalValue::PrivateLinkage,
 /*Initializer=*/0, // has initializer, specified below
 /*Name=*/".str5");
 gvar_array__str5->setAlignment(1);
 
 GlobalVariable* gvar_ptr_stderr = new GlobalVariable(/*Module=*/*mod, 
 /*Type=*/PointerTy_11,
 /*isConstant=*/false,
 /*Linkage=*/GlobalValue::ExternalLinkage,
 /*Initializer=*/0, 
 /*Name=*/"stderr");
 
 GlobalVariable* gvar_array__str6 = new GlobalVariable(/*Module=*/*mod, 
 /*Type=*/ArrayTy_8,
 /*isConstant=*/true,
 /*Linkage=*/GlobalValue::PrivateLinkage,
 /*Initializer=*/0, // has initializer, specified below
 /*Name=*/".str6");
 gvar_array__str6->setAlignment(1);
 
 GlobalVariable* gvar_array__str7 = new GlobalVariable(/*Module=*/*mod, 
 /*Type=*/ArrayTy_16,
 /*isConstant=*/true,
 /*Linkage=*/GlobalValue::PrivateLinkage,
 /*Initializer=*/0, // has initializer, specified below
 /*Name=*/".str7");
 gvar_array__str7->setAlignment(1);
 
 // Constant Definitions
 Constant *const_array_30 = ConstantDataArray::getString(mod->getContext(), "im in foo\x0A", true);
 Constant *const_array_31 = ConstantDataArray::getString(mod->getContext(), "im in foobar\x0A", true);
 Constant *const_array_32 = ConstantDataArray::getString(mod->getContext(), "im in bar\x0A", true);
 Constant *const_array_33 = ConstantDataArray::getString(mod->getContext(), "input: ", true);
 Constant *const_array_34 = ConstantDataArray::getString(mod->getContext(), "%d", true);
 Constant *const_array_35 = ConstantDataArray::getString(mod->getContext(), "%d\x0A", true);
 Constant *const_array_36 = ConstantDataArray::getString(mod->getContext(), "%s\x0A", true);
 Constant *const_array_37 = ConstantDataArray::getString(mod->getContext(), "CallInst called %d times\x0A", true);
 std::vector<Constant*> const_ptr_38_indices;
 ConstantInt* const_int32_39 = ConstantInt::get(mod->getContext(), APInt(32, StringRef("0"), 10));
 const_ptr_38_indices.push_back(const_int32_39);
 const_ptr_38_indices.push_back(const_int32_39);
 Constant* const_ptr_38 = ConstantExpr::getGetElementPtr(gvar_array__str, const_ptr_38_indices);
 ConstantInt* const_int32_40 = ConstantInt::get(mod->getContext(), APInt(32, StringRef("1"), 10));
 std::vector<Constant*> const_ptr_41_indices;
 const_ptr_41_indices.push_back(const_int32_39);
 const_ptr_41_indices.push_back(const_int32_39);
 Constant* const_ptr_41 = ConstantExpr::getGetElementPtr(gvar_array__str1, const_ptr_41_indices);
 ConstantInt* const_int32_42 = ConstantInt::get(mod->getContext(), APInt(32, StringRef("2"), 10));
 std::vector<Constant*> const_ptr_43_indices;
 const_ptr_43_indices.push_back(const_int32_39);
 const_ptr_43_indices.push_back(const_int32_39);
 Constant* const_ptr_43 = ConstantExpr::getGetElementPtr(gvar_array__str2, const_ptr_43_indices);
 std::vector<Constant*> const_ptr_44_indices;
 const_ptr_44_indices.push_back(const_int32_39);
 const_ptr_44_indices.push_back(const_int32_39);
 Constant* const_ptr_44 = ConstantExpr::getGetElementPtr(gvar_array__str3, const_ptr_44_indices);
 std::vector<Constant*> const_ptr_45_indices;
 const_ptr_45_indices.push_back(const_int32_39);
 const_ptr_45_indices.push_back(const_int32_39);
 Constant* const_ptr_45 = ConstantExpr::getGetElementPtr(gvar_array__str4, const_ptr_45_indices);
 std::vector<Constant*> const_ptr_46_indices;
 const_ptr_46_indices.push_back(const_int32_39);
 const_ptr_46_indices.push_back(const_int32_39);
 Constant* const_ptr_46 = ConstantExpr::getGetElementPtr(gvar_array__str5, const_ptr_46_indices);
 std::vector<Constant*> const_ptr_47_indices;
 const_ptr_47_indices.push_back(const_int32_39);
 const_ptr_47_indices.push_back(const_int32_39);
 Constant* const_ptr_47 = ConstantExpr::getGetElementPtr(gvar_array__str6, const_ptr_47_indices);
 std::vector<Constant*> const_ptr_48_indices;
 const_ptr_48_indices.push_back(const_int32_39);
 const_ptr_48_indices.push_back(const_int32_39);
 Constant* const_ptr_48 = ConstantExpr::getGetElementPtr(gvar_array__str7, const_ptr_48_indices);
 
 // Global Variable Definitions
 gvar_array__str->setInitializer(const_array_30);
 gvar_array__str1->setInitializer(const_array_31);
 gvar_array__str2->setInitializer(const_array_32);
 gvar_array__str3->setInitializer(const_array_33);
 gvar_array__str4->setInitializer(const_array_34);
 gvar_array__str5->setInitializer(const_array_35);
 gvar_array__str6->setInitializer(const_array_36);
 gvar_array__str7->setInitializer(const_array_37);
 
 // Function Definitions
 
 // Function: foo (func_foo)
 {
  
  BasicBlock* label_entry = BasicBlock::Create(mod->getContext(), "entry",func_foo,0);
  
  // Block entry (label_entry)
  CallInst* int32_call = CallInst::Create(func_printf, const_ptr_38, "call", label_entry);
  int32_call->setCallingConv(CallingConv::C);
  int32_call->setTailCall(false);
  AttributeSet int32_call_PAL;
  int32_call->setAttributes(int32_call_PAL);
  
  ReturnInst::Create(mod->getContext(), const_int32_40, label_entry);
  
 }
 
 // Function: foobar (func_foobar)
 {
  
  BasicBlock* label_entry_50 = BasicBlock::Create(mod->getContext(), "entry",func_foobar,0);
  
  // Block entry (label_entry_50)
  CallInst* int32_call_51 = CallInst::Create(func_printf, const_ptr_41, "call", label_entry_50);
  int32_call_51->setCallingConv(CallingConv::C);
  int32_call_51->setTailCall(false);
  AttributeSet int32_call_51_PAL;
  int32_call_51->setAttributes(int32_call_51_PAL);
  
  ReturnInst::Create(mod->getContext(), const_int32_42, label_entry_50);
  
 }
 
 // Function: bar (func_bar)
 {
  Function::arg_iterator args = func_bar->arg_begin();
  Value* int32_i = args++;
  int32_i->setName("i");
  
  BasicBlock* label_entry_53 = BasicBlock::Create(mod->getContext(), "entry",func_bar,0);
  BasicBlock* label_if_then = BasicBlock::Create(mod->getContext(), "if.then",func_bar,0);
  BasicBlock* label_if_else = BasicBlock::Create(mod->getContext(), "if.else",func_bar,0);
  BasicBlock* label_return = BasicBlock::Create(mod->getContext(), "return",func_bar,0);
  
  // Block entry (label_entry_53)
  AllocaInst* ptr_retval = new AllocaInst(IntegerType::get(mod->getContext(), 32), "retval", label_entry_53);
  ptr_retval->setAlignment(4);
  AllocaInst* ptr_i_addr = new AllocaInst(IntegerType::get(mod->getContext(), 32), "i.addr", label_entry_53);
  ptr_i_addr->setAlignment(4);
  AllocaInst* ptr_b = new AllocaInst(IntegerType::get(mod->getContext(), 32), "b", label_entry_53);
  ptr_b->setAlignment(4);
  AllocaInst* ptr_c = new AllocaInst(IntegerType::get(mod->getContext(), 32), "c", label_entry_53);
  ptr_c->setAlignment(4);
  StoreInst* void_54 = new StoreInst(int32_i, ptr_i_addr, false, label_entry_53);
  void_54->setAlignment(4);
  CallInst* int32_call_55 = CallInst::Create(func_printf, const_ptr_43, "call", label_entry_53);
  int32_call_55->setCallingConv(CallingConv::C);
  int32_call_55->setTailCall(false);
  AttributeSet int32_call_55_PAL;
  int32_call_55->setAttributes(int32_call_55_PAL);
  
  LoadInst* int32_56 = new LoadInst(ptr_i_addr, "", false, label_entry_53);
  int32_56->setAlignment(4);
  ICmpInst* int1_tobool = new ICmpInst(*label_entry_53, ICmpInst::ICMP_NE, int32_56, const_int32_39, "tobool");
  BranchInst::Create(label_if_then, label_if_else, int1_tobool, label_entry_53);
  
  // Block if.then (label_if_then)
  CallInst* int32_call1 = CallInst::Create(func_foo, "call1", label_if_then);
  int32_call1->setCallingConv(CallingConv::C);
  int32_call1->setTailCall(false);
  AttributeSet int32_call1_PAL;
  int32_call1->setAttributes(int32_call1_PAL);
  
  StoreInst* void_58 = new StoreInst(int32_call1, ptr_b, false, label_if_then);
  void_58->setAlignment(4);
  LoadInst* int32_59 = new LoadInst(ptr_b, "", false, label_if_then);
  int32_59->setAlignment(4);
  BinaryOperator* int32_add = BinaryOperator::Create(Instruction::Add, const_int32_40, int32_59, "add", label_if_then);
  StoreInst* void_60 = new StoreInst(int32_add, ptr_retval, false, label_if_then);
  BranchInst::Create(label_return, label_if_then);
  
  // Block if.else (label_if_else)
  CallInst* int32_call2 = CallInst::Create(func_foobar, "call2", label_if_else);
  int32_call2->setCallingConv(CallingConv::C);
  int32_call2->setTailCall(false);
  AttributeSet int32_call2_PAL;
  int32_call2->setAttributes(int32_call2_PAL);
  
  StoreInst* void_62 = new StoreInst(int32_call2, ptr_c, false, label_if_else);
  void_62->setAlignment(4);
  LoadInst* int32_63 = new LoadInst(ptr_c, "", false, label_if_else);
  int32_63->setAlignment(4);
  BinaryOperator* int32_add3 = BinaryOperator::Create(Instruction::Add, const_int32_42, int32_63, "add3", label_if_else);
  StoreInst* void_64 = new StoreInst(int32_add3, ptr_retval, false, label_if_else);
  BranchInst::Create(label_return, label_if_else);
  
  // Block return (label_return)
  LoadInst* int32_66 = new LoadInst(ptr_retval, "", false, label_return);
  ReturnInst::Create(mod->getContext(), int32_66, label_return);
  
 }
 
 // Function: main (func_main)
 {
  
  BasicBlock* label_entry_68 = BasicBlock::Create(mod->getContext(), "entry",func_main,0);
  
  // Block entry (label_entry_68)
  AllocaInst* ptr_retval_69 = new AllocaInst(IntegerType::get(mod->getContext(), 32), "retval", label_entry_68);
  ptr_retval_69->setAlignment(4);
  AllocaInst* ptr_d = new AllocaInst(IntegerType::get(mod->getContext(), 32), "d", label_entry_68);
  ptr_d->setAlignment(4);
  StoreInst* void_70 = new StoreInst(const_int32_39, ptr_retval_69, false, label_entry_68);
  CallInst* int32_call_71 = CallInst::Create(func_printf, const_ptr_44, "call", label_entry_68);
  int32_call_71->setCallingConv(CallingConv::C);
  int32_call_71->setTailCall(false);
  AttributeSet int32_call_71_PAL;
  int32_call_71->setAttributes(int32_call_71_PAL);
  
  std::vector<Value*> int32_call1_72_params;
  int32_call1_72_params.push_back(const_ptr_45);
  int32_call1_72_params.push_back(ptr_d);
  CallInst* int32_call1_72 = CallInst::Create(func___isoc99_scanf, int32_call1_72_params, "call1", label_entry_68);
  int32_call1_72->setCallingConv(CallingConv::C);
  int32_call1_72->setTailCall(false);
  AttributeSet int32_call1_72_PAL;
  int32_call1_72->setAttributes(int32_call1_72_PAL);
  
  LoadInst* int32_73 = new LoadInst(ptr_d, "", false, label_entry_68);
  int32_73->setAlignment(4);
  CallInst* int32_call2_74 = CallInst::Create(func_bar, int32_73, "call2", label_entry_68);
  int32_call2_74->setCallingConv(CallingConv::C);
  int32_call2_74->setTailCall(false);
  AttributeSet int32_call2_74_PAL;
  int32_call2_74->setAttributes(int32_call2_74_PAL);
  
  std::vector<Value*> int32_call3_params;
  int32_call3_params.push_back(const_ptr_46);
  int32_call3_params.push_back(int32_call2_74);
  CallInst* int32_call3 = CallInst::Create(func_printf, int32_call3_params, "call3", label_entry_68);
  int32_call3->setCallingConv(CallingConv::C);
  int32_call3->setTailCall(false);
  AttributeSet int32_call3_PAL;
  int32_call3->setAttributes(int32_call3_PAL);
  
  ReturnInst::Create(mod->getContext(), const_int32_39, label_entry_68);
  
 }
 
 // Function: log_msg (func_log_msg)
 {
  Function::arg_iterator args = func_log_msg->arg_begin();
  Value* ptr_msg = args++;
  ptr_msg->setName("msg");
  
  BasicBlock* label_entry_76 = BasicBlock::Create(mod->getContext(), "entry",func_log_msg,0);
  
  // Block entry (label_entry_76)
  AllocaInst* ptr_msg_addr = new AllocaInst(PointerTy_12, "msg.addr", label_entry_76);
  ptr_msg_addr->setAlignment(8);
  StoreInst* void_77 = new StoreInst(ptr_msg, ptr_msg_addr, false, label_entry_76);
  void_77->setAlignment(8);
  LoadInst* ptr_78 = new LoadInst(gvar_ptr_stderr, "", false, label_entry_76);
  ptr_78->setAlignment(8);
  LoadInst* ptr_79 = new LoadInst(ptr_msg_addr, "", false, label_entry_76);
  ptr_79->setAlignment(8);
  std::vector<Value*> int32_call_80_params;
  int32_call_80_params.push_back(ptr_78);
  int32_call_80_params.push_back(const_ptr_47);
  int32_call_80_params.push_back(ptr_79);
  CallInst* int32_call_80 = CallInst::Create(func_fprintf, int32_call_80_params, "call", label_entry_76);
  int32_call_80->setCallingConv(CallingConv::C);
  int32_call_80->setTailCall(false);
  AttributeSet int32_call_80_PAL;
  int32_call_80->setAttributes(int32_call_80_PAL);
  
  ReturnInst::Create(mod->getContext(), label_entry_76);
  
 }
 
 // Function: log_call_count (func_log_call_count)
 {
  Function::arg_iterator args = func_log_call_count->arg_begin();
  Value* int32_cnt = args++;
  int32_cnt->setName("cnt");
  
  BasicBlock* label_entry_82 = BasicBlock::Create(mod->getContext(), "entry",func_log_call_count,0);
  
  // Block entry (label_entry_82)
  AllocaInst* ptr_cnt_addr = new AllocaInst(IntegerType::get(mod->getContext(), 32), "cnt.addr", label_entry_82);
  ptr_cnt_addr->setAlignment(4);
  StoreInst* void_83 = new StoreInst(int32_cnt, ptr_cnt_addr, false, label_entry_82);
  void_83->setAlignment(4);
  LoadInst* ptr_84 = new LoadInst(gvar_ptr_stderr, "", false, label_entry_82);
  ptr_84->setAlignment(8);
  LoadInst* int32_85 = new LoadInst(ptr_cnt_addr, "", false, label_entry_82);
  int32_85->setAlignment(4);
  std::vector<Value*> int32_call_86_params;
  int32_call_86_params.push_back(ptr_84);
  int32_call_86_params.push_back(const_ptr_48);
  int32_call_86_params.push_back(int32_85);
  CallInst* int32_call_86 = CallInst::Create(func_fprintf, int32_call_86_params, "call", label_entry_82);
  int32_call_86->setCallingConv(CallingConv::C);
  int32_call_86->setTailCall(false);
  AttributeSet int32_call_86_PAL;
  int32_call_86->setAttributes(int32_call_86_PAL);
  
  ReturnInst::Create(mod->getContext(), label_entry_82);
  
 }
 
 return mod;
}
