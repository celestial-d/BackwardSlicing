#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Analysis/CallGraph.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"
#include "llvm/Analysis/CallGraphSCCPass.h"
#include "llvm/Support/CommandLine.h"
using namespace llvm;

namespace {
static cl::opt<std::string> target("target",
                                              cl::desc("target funcion"),
                                              cl::value_desc("target"), cl::init(""));
struct Call : public CallGraphSCCPass {
  static char ID;
  Call() : CallGraphSCCPass(ID) {}
  
  int flag=1;//use for find out target function
  bool runOnSCC(CallGraphSCC &SCC) override {
    //errs() << "Target function: " << target << '\n';
    
    for (CallGraphNode *CGN : SCC) {
    	errs() << "new scc" << '\n';
    	if (Function *F = CGN->getFunction()) {
    		if (F->getName() == target) 
    			flag=1;
    		if (flag==1)
    			errs() << "function: "<< F->getName() << '\n';
    	}
    }	
    

    return false;
  }
}; // end of struct Dr_checker
}  // end of anonymous namespace

char Call::ID = 0;
static RegisterPass<Call> 
X("Call", "Call Pass",
      false /* Only looks at CFG */,
      false /* Analysis Pass */
);



