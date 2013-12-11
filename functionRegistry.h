#ifndef FUNCTIONREGISTRY_H_INCLUDED
#define FUNCTIONREGISTRY_H_INCLUDED

#include <vector>

class functionRegistry {
public:
  void functionRegistry();
  ~void functionRegistry();
  typedef void* inst;
  typedef void(*functionName)(inst);
  void updateAll();
  void addUpdateFunction(functionName,inst);
private:
  std::vector<inst> instances;
  std::vector<functionName> functions;
};

#endif // FUNCTIONREGISTRY_H_INCLUDED
