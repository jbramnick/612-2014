#ifndef SMOOTHJOYSTICK_H
#define SMOTHJOYSTICK_H

#include <Joystick.h>
#include "controls.h"
#include <vector>
#include <bitset>

Joystick* driverJoystick;
Joystick* gunnerJoystick;

class SmoothJoystick
{
public:
    typedef void* joyfuncObjects;
    typedef void(*joyFunctions)(joyfuncObjects);
    typedef void* btn_Obj;
    std::vector<joyfuncObjects> Objects;
    std::vector<joyFunctions> joystickFuncs;
    std::vector<bitset> buttons[buttonNum];

    void addJoyFunctions(joyFunctions controlFunctions, joyfuncObjects controlObjects);
    void updateJoyFunctions();
    void addButtons();
    void checkSmooth();
};

#endif //SMOOTHJOYSTICK_H
