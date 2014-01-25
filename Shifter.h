#ifndef SHIFTER_H_INCLUDED
#define SHIFTER_H_INCLUDED
#include <DoubleSolenoid.h>
#include <Timer.h>
#include "Pneumatics.h"

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
    Pneumatics* pneumatics;
    enum Gear {high,low};
    Gear gear;
    const static double time = 0.1;
};


#endif // SHIFTER_H_INCLUDED
