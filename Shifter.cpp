#include "Shifter.h"

Shifter::Shifter(uint8_t modR,uint32_t chanR,uint8_t modL,uint32_t chanL)
{
    shifterL=new DoubleSolenoid(modL,chanL);
    shifterR=new DoubleSolenoid(modR,chanR);
    
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
        
        setHigh();
    }
    else if(gear == high)
    {
        
        setLow();
    }
}

void Shifter::setHigh()
{
    gear=high;
    pneumatics->setVectorValues(TIME, shifterL, DoubleSolenoid::kForward);
    pneumatics->setVectorValues(TIME, shifterR, DoubleSolenoid::kForward);
}

void Shifter::setLow()
{
    gear=low;
    pneumatics->setVectorValues(TIME, shifterL, DoubleSolenoid::kReverse);
    pneumatics->setVectorValues(TIME, shifterR, DoubleSolenoid::kReverse);
}
