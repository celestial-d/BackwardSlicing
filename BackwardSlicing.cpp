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

//input parameter define
static cl::opt<unsigned> value("value",cl::desc("slicing value "),cl::value_desc("value"), cl::init(0));

//accessory functions

void SlicingAlloca(Instruction &I, std::map<StringRef, bool> &slicingMap) {
	StringRef op1 = I.getOperand(0)->getName();
	
}
void SlicingStore(Instruction &I, std::map<StringRef, bool> &slicingMap) {
	//StringRef op1 = I.getOperand(0)->getName();
    	//StringRef op2 = I.getOperand(1)->getName();
    	//if(slicingMap.find(op1)->second && !op2.empty())
      	//	slicingMap.insert(std::pair<StringRef, bool>(op2, 1));
    	//else if(!op2.empty())
      	//	slicingMap.insert(std::pair<StringRef, bool>(op2, 0));
      	//errs() << "store " << slicingMap.find(op1)->first << " " << slicingMap.find(op2)->second <<"\n";
      	errs() << "test:\n";
      	
}
void SlicingLoad(Instruction &I, std::map<StringRef, bool> &slicingMap) {
	errs() << "test:\n";
}
void SlicingSub(Instruction &I, std::map<StringRef, bool> &slicingMap) {
	errs() << "test:\n";
}	
void SlicingAdd(Instruction &I, std::map<StringRef, bool> &slicingMap) {
	errs() << "test:\n";
}
void visitor(Function &F) {
	errs() << "Function: ";
    	errs().write_escaped(F.getName()) << '\n';
    	/*for(auto iter = F.arg_begin(); iter != F.arg_end(); ++iter)
    	{
      		StringRef varName = iter->getName();
      		errs() << "Variable: ";
        	errs() << varName << "\n";
    	} */
    	int count=value;
    	std::map<StringRef, bool> SlicingMap;
    	for (BasicBlock &B: F)
    	{
      		for (Instruction &I: B)
      		{
        		//errs() << "Intruction:";
          		//errs() << I << "\n";
        		unsigned opcode = I.getOpcode();
        		if (opcode == llvm::Instruction::Alloca)
        		{
          			if (count == 0) {
          				SlicingAlloca(I,SlicingMap);
          				errs() << I << "\n";
          			}	
          			count--;
        		}
        		else if (opcode == llvm::Instruction::Store)
        		{
          			SlicingStore(I,SlicingMap);
        		}
        		else if (opcode == llvm::Instruction::Load)
        		{
          			SlicingLoad(I,SlicingMap);
        		}
        		else if (opcode == llvm::Instruction::Sub)
        		{
          			SlicingSub(I,SlicingMap);
        		}
        		else if (opcode == llvm::Instruction::Add)
        		{
          			SlicingAdd(I,SlicingMap);
        		}
        		
        	}
        }
}
//Impletmentation
struct BackwardSlicing : public ModulePass {
    static char ID;
    BackwardSlicing() : ModulePass(ID) {}
    
    bool runOnModule(Module &M) override {
      errs() << value << "\n";
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
    false, // This pass doesn't modify the CFG => true
    false // This pass is not a pure analysis pass => false
 );
