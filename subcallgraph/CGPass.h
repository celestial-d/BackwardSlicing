#include <llvm/Pass.h>
#include <llvm/IR/Function.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/IR/InstIterator.h>
#include <llvm/IR/Instruction.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Metadata.h>
#include <llvm/IR/DebugInfo.h>
#include <llvm/IR/DebugLoc.h>
#include <llvm/IR/IntrinsicInst.h>
#include <llvm/Analysis/AliasAnalysis.h>
#include <string>
#include <set>
#include "llvm/Support/CommandLine.h"
using namespace llvm;

namespace {
	static cl::opt<std::string> target("target",cl::desc("target funcion"),cl::value_desc("target"), cl::init(""));
	static cl::opt<std::string> entry("entry",cl::desc("entry funcion"),cl::value_desc("entry"), cl::init(""));
	class CallGraph {
	public:
		
		CallGraph(Function *mainFunc) : mMain(mainFunc) {}
		~CallGraph() {}
		void AddEdge(Function * f, Function * t) {
			m_map[f].insert(t);
		}
		//print call graph
		void print() const;
		//save to dot
		void dump() const;
		bool hasFunction(Function *func) {
			std::map<Function*, std::set<Function*> >::iterator iter = m_map.find(func);
			if (iter == m_map.end())
				return false;
			return true;
		}
		std::map<Function*, std::set<Function*> > m_map;
		std::list<Function*> valueList;
	private:
		Function* mMain; 
		unsigned int edge_count = 0;
	};
	class CGPass : public ModulePass
	{
	public:
		static char ID;
		CGPass() : ModulePass(ID){}
		virtual bool runOnModule(Module &M) override;
		
	private:
		CallGraph *G;		
	};
	char CGPass::ID = 0;
}

