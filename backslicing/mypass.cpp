#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"

#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"
using namespace llvm;

namespace {
struct Drchecker : public FunctionPass {
  static char ID;
  Drchecker() : FunctionPass(ID) {}

  bool runOnFunction(Function &F) override {
    errs() << "Hello: ";
    errs().write_escaped(F.getName()) << '\n';
    return false;
  }
}; // end of struct Dr_checker
}  // end of anonymous namespace

char Drchecker::ID = 0;
static RegisterPass<Drchecker> 
X("Drchecker", "Drchecker Pass",
      false /* Only looks at CFG */,
      false /* Analysis Pass */
);



