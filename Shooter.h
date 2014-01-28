/*
#ifndef SHOOTER_H_INCLUDED
#define SHOOTER_H_INCLUDED

#include <CANJaguar.h>
#include <Solenoid.h>
#include “Controller.h”

class Shooter
{
public:
    Shooter(uint8_t, ControlMode,
            uint8_t, ControlMode,
            uint8_t, uint32_t);
    ~Shooter();
    void pitch();
    void pull();
    void clamp(Clamp);
    CANJaguar* axis;
    CANJaguar* attractor;
    Solenoid* clamper;
    //Blah* puncher;
    enum Clamp {down, up}
    const float SPEED = 0.5;
};

#endif // SHOOTER_H_INCLUDED
*/
