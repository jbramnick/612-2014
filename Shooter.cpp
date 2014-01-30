#include "Shooter.h"

Shooter::Shooter(uint8_t axisMod,
                 uint8_t attractMod,
                 uint8_t clampMod, uint32_t clampChan)
{
    axis = new CANJaguar(axisMod);
    attractor = new CANJaguar(attractMod);
    clamper = new DoubleSolenoid(clampMod, clampChan);
}

Shooter::~Shooter()
{
    delete axis;
    delete attractor;
    delete clamper;
}

void Shooter::pitch(bool direc)//true = up, false = down
{
    if(direc)
    {
        axis->Set(SPEED_AXISPOWER);
    }
    else
    {
        axis->Set(-SPEED_AXISPOWER);
    }
}

void Shooter::pull()
{
    attractor->Set(SPEED_ATTRACTOR);
}

void Shooter::pullStop()
{
    attractor->Set(0);
}

//@param goClamp moves clamper, off says to stop clamper
void Shooter::autoClamp(bool goClamp, bool off)
{
    if(!off){
        if(goClamp)
        {
            clampDown();
        }
        else
        {
            clampUp();
        }
    }
    else
    {
        clamper -> Set(DoubleSolenoid::kOff);
    }
}

void Shooter::clampDown()
{
    clamper -> Set(DoubleSolenoid::kForward);
    pull();
    clamp = down;
}

void Shooter::clampUp()
{
    clamper -> Set(DoubleSolenoid::kReverse);
    pullStop();
    clamp = up;
}
