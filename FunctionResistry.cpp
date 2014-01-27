#include <vector>
#include "FunctionRegistry.h"

functionRegistry::functionRegistry()
{

}

functionRegistry::~functionRegistry()
{

}

void functionRegistry::updateFunctions()
{
    for(unsigned int j = 0; j < instances.size(); j++)
    {
        //in the format of f(object)
        (functions.at(j))(instances.at(j));
    }
}

void functionRegistry::addFunctions(functionName funk, instType funkObj)
{
    instances.push_back(funkObj);
    functions.push_back(funk);
}
