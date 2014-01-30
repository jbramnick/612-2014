#ifndef SHOOTER_H_INCLUDED
#define SHOOTER_H_INCLUDED

#include <CANJaguar.h>
#include <DoubleSolenoid.h>
#include "Controller.h"

class Shooter
{
public:
    Shooter(uint8_t axisMod,
            uint8_t attractMod,
            uint8_t clampMod, uint32_t clampChan);
    ~Shooter();
    enum Clamp {down, up};
    Clamp clamp;
    void pitch(bool direc);//moves it up and down
    void pull();//Wheel pulls ball
    void pullStop();
    void autoClamp(bool goClamp, bool off);
    void clampDown();//Clamps down on ball & pulls
    void clampUp();//opens clamp
    CANJaguar* axis;
    CANJaguar* attractor;
    DoubleSolenoid* clamper;
    //Blah* puncher;
    const static float SPEED_AXISPOWER = 0.5f;
    const static float SPEED_ATTRACTOR = 0.5f;
};

#endif // SHOOTER_H_INCLUDED
