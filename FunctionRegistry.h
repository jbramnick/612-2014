#ifndef FUNCTIONREGISTRY_H
#define FUNCTIONREGISTRY_H

#include <vector>

class FunctionRegistry
{
public:
    FunctionRegistry();
    ~FunctionRegistry();
    typedef void* instType;
    typedef void(*functionName)(instType);
    std::vector<instType> instances;
    std::vector<functionName> functions;
    void updateFunctions();
    void addFunctions(functionName funk, instType funkObj);
};

#endif
