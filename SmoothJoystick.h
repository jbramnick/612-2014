#ifndef SMOOTHJOYSTICK_H
#define SMOOTHJOYSTICK_H

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
    std::vector<uint32_t> joyfuncButtons;
    std::vector<bool> funcBools;
    std::vector<std::bitset<3>* > buttons;

    void addJoyFunctions(joyFunctions controlFunctions, joyfuncObjects controlObjects, uint32_t btn);
    void updateJoyFunctions();
    void addButtons();
    void buttonUpdate();
    bool GetSmoothButton(int Button_number);
    double isAxisZero(uint32_t axis);
};

#endif //SMOOTHJOYSTICK_H
