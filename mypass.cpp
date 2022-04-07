#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"


#include "llvm/IR/Constants.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/ConstantRange.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/ADT/DenseMap.h"
//#include "llvm/IR/CallSite.h" change to AbstractCallsite
//#include "llvm/IR/AbstractCallSite.h"
#include "llvm/ADT/StringMap.h"
#include "llvm/ADT/SmallPtrSet.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
//#include "llvm/Support/TimeValue.h" change to Chrono
#include "llvm/Support/Chrono.h"
#include "llvm/Support/Process.h"
#include "llvm/Support/FileSystem.h"
#include <deque>
#include <stack>
#include <set>
#include <sstream>
#include <algorithm>
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
      true /* Only looks at CFG */,
      true /* Analysis Pass */
);



