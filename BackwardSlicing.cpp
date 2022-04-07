//----------------------------------------
//-----------Backward slicing-------------
//-------------By Duo Zhang---------------
//----------------------------------------

#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

namespace {

void visitor(Function &F) {
	errs() << "Hello: ";
    	errs().write_escaped(F.getName()) << '\n';
}
//Impletmentation
struct BackwardSlicing : public ModulePass {
    static char ID;
    BackwardSlicing() : ModulePass(ID) {}
    
    bool runOnModule(Module &M) override {
      for(Function &F: M)
      {
        visitor(F);
      }
      
      return false;
    }
  };
}//namespace

//registraion
char BackwardSlicing::ID =0;
static RegisterPass<BackwardSlicing>
X("backward-slicing", "Backward Slicing Pass",
    true, // This pass doesn't modify the CFG => true
    true // This pass is not a pure analysis pass => false
 );
