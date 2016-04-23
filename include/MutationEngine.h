#pragma once

namespace llvm {
  class Module;
}

namespace Mutang {

class MutationPoint;

class MutationEngine {
public:
  void applyMutation(llvm::Module *M, MutationPoint &MP);
};

}