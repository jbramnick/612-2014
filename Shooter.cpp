/*
#include Shooter.h

Shooter::Shooter(uint8_t axisMod, ControlMode axisMode,
                 uint8_t attractMod, ControlMode attractMode,
                 uint8_t clampMod, uint32_t clampChan)
{
    axis = new CANJaguar(axisMod, axisMode);
    attractor = new CANJaguar(attractMod, attractMode);
    clamper = new Solenoid(clampMod, clampChan);
}

Shooter::~Shooter()
{
    delete axis;
    delete attractor;
    delete clamper;
}

void Shooter::pitch()
{
    axis->Set(SPEED, 0);

}

void Shooter::pull()
{
    //TODO
}

void Shooter::clamp(Clamp c)
{
    if(c == up)
    {
        clamper -> Set(kForward);
        if()
        {
            clamper -> Set(kOff);
        }
    }
    else if(c == down)
    {
        clamper -> Set(kReverse);
    }

}
*/
