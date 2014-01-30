#ifndef SMOOTHJOYSTICK_H
#define SMOTHJOYSTICK_H

#include <Joystick.h>
#include "controls.h"
#include <vector>
#include <bitset>


class SmoothJoystick: public Joystick
{
private:
    static const int amountOfButtons = 12;
public:
    SmoothJoystick(uint32_t port);
    ~SmoothJoystick();
    typedef void* joyfuncObjects;
    typedef void(*joyFunctions)(joyfuncObjects);
    typedef bool* functionBool;
    typedef void* btn_Obj;
    std::vector<joyfuncObjects> Objects;
    std::vector<joyFunctions> joystickFuncs;
    std::vector<std::bitset<3> > buttons;
    std::vector<bool> funcBools;

    void addJoyFunctions(joyFunctions controlFunctions, joyfuncObjects controlObjects, functionBool called);
    void updateJoyFunctions();
    void addButtons();
    void buttonUpdate(int Button_number);
    bool GetSmoothButton(int Button_number);
};

#endif //SMOOTHJOYSTICK_H
