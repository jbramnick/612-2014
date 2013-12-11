#include "functionRegistry.h" // include other file "functionRegistry.h"
#include <vector> 

functionRegistry::functionRegistry()    // constructor
{
  
}
  
functionRegistry::~functionRegistry()   // destructor
{
  
}

void functionRegistry::addUpdateFunction (functionName f)
{
  functions.push_back(f);
}

void functionRegistry::updateAll()
{
  
}
