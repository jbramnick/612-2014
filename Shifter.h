#ifndef SHIFTER_H_INCLUDED
#define SHIFTER_H_INCLUDED
#include "DoubleSolenoid.h"

class Shifter
{
    Shifter();
    ~Shifter();
    void shift();
    void forwards();
    void backwards();
    DoubleSolenoid* shifter;
}

#endif // SHIFTER_H_INCLUDED
