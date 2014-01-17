#include "Shifter.h"

Shifter::Shifter()
{
    gear = low;
    //TODO
};

Shifter::~Shifter()
{
    delete gear;
    //TODO
}

void Shifter::shiftGear()
{
    if(gear == low)
    {
        gear = high;
    }
    else if(gear == high)
    {
        gear = low;
    }
}

void Shifter::forwards()
{
    shifter->Set(DoubleSolenoid::kForward);
}

void Shifter::backwards()
{
    shifter->Set(DoubleSolenoid::kReverse);
}
