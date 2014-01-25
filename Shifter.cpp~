#include "Shifter.h"

Shifter::Shifter()
{
    gear = high;
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

void Shifter::setHigh()
{
    pneumatics->setVectorValues(time, shifterL, DoubleSolenoid::kForward);
    pneumatics->setVectorValues(time, shifterR, DoubleSolenoid::kForward);
}

void Shifter::setLow()
{
    pneumatics->setVectorValues(time, shifterL, DoubleSolenoid::kReverse);
    pneumatics->setVectorValues(time, shifterR, DoubleSolenoid::kReverse);
}
