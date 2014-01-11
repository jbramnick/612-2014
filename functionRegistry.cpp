#include "functionRegistry.h" // include other file "functionRegistry.h"
#include <vector> 

functionRegistry::functionRegistry()    // constructor
{
  
}
  
functionRegistry::~functionRegistry()   // destructor
{
  
}

void functionRegistry::addUpdateFunction (functionName f) // Swaraj said something about not needing instances, reference last year's code
{
  functions.push_back(f);
}

void functionRegistry::updateAll()
{
  
}
