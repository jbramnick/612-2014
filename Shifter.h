#ifndef SHIFTER_H_INCLUDED
#define SHIFTER_H_INCLUDED
#include "DoubleSolenoid.h"

class Shifter
{
public:
    Shifter();
    ~Shifter();
    void shiftGear();
    void forwards();
    void backwards();
    DoubleSolenoid* shifter;
    enum Gear {high,low};
    Gear gear;
};


#endif // SHIFTER_H_INCLUDED
