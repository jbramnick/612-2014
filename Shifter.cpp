#include "Shifter.h"

Shifter::Shifter()
{
   gear = Gear.low;
    //TODO
};

Shifter::~Shifter()
{
    delete gear;
    //TODO
}

void Shifter::shiftTo()
{
    if(gear == Gear.low){
        gear = Gear.high;
    }else if(gear == Gear.high){
        gear = Gear.low;
    }
}

void Shifter::foward()
{
    shifter->Set(DoubleSolenoid::kForward);
}

void Shifter::backward()
{
    shifter->Set(DoubleSolenoid::kReverse);
}
