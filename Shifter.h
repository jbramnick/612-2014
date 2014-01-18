#ifndef SHIFTER_H_INCLUDED
#define SHIFTER_H_INCLUDED
#include "DoubleSolenoid.h"

class Shifter
{
public:
    Shifter();
    ~Shifter();
    void shiftGear();
    void setHigh();
    void setLow();
    DoubleSolenoid* shifterL;
    DoubleSolenoid* shifterR;
    enum Gear {high,low};
    Gear gear;
};


#endif // SHIFTER_H_INCLUDED
