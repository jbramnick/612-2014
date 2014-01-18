#include "Shifter.h"

Shifter::Shifter()
{
    gear = high;
    shifterL->Set(DoubleSolenoid::kForward);
    shifterR->Set(DoubleSolenoid::kForward);
    //TODO
}

Shifter::~Shifter()
{
    delete shifterL;
    delete shifterR;
    //TODO
}

void Shifter::shiftGear()
{
    if(gear == low)
    {
        gear = high;
        setHigh();
    }
    else if(gear == high)
    {
        gear = low;
        setLow();
    }
}

void Shifter::forwards()
{
    shifterL->Set(DoubleSolenoid::kForward);
    shifterR->Set(DoubleSolenoid::kForward);
}

void Shifter::backwards()
{
    shifterL->Set(DoubleSolenoid::kOff);
    shifterR->Set(DoubleSolenoid::kOff);
}
