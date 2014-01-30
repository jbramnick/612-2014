#include "SmoothJoystick.h"
#include "controls.h"
#include <vector>
#include <bitset>
//#include <EmperorKoch.h>

SmoothJoystick::SmoothJoystick(uint32_t port): Joystick(port)
{

}

SmoothJoystick::~SmoothJoystick()
{

}

void SmoothJoystick::addJoyFunctions(joyFunctions controlFunctions, joyfuncObjects controlObjects, functionBool called)
{
    Objects.push_back(controlObjects);
    joystickFuncs.push_back(controlFunctions);
    funcBools.push_back(called);

}

void SmoothJoystick::updateJoyFunctions()
{
    for(unsigned int k = 0; k < funcBools.size(); k++)
    {
        /*in the format of f(object)
        loop check to see if function was called before so that it runs once*/
        if(funcBools.at(k))
        {
            (joystickFuncs.at(k))(Objects.at(k));
        }
    }
}

void SmoothJoystick::addButtons()
{
    int m = 0;

    std::bitset<3> newButton;

    do
    {
        buttons.push_back(newButton);
        m = m + 1;
    }
    while (m < amountOfButtons);//don't know where this goes :P
}

bool SmoothJoystick::GetSmoothButton(int Button_number)
{
    int value1 = (buttons.at(Button_number))[0];
    int value2 = (buttons.at(Button_number))[1];
    int value3 = (buttons.at(Button_number))[2];

    if(value1 == 1 && value2 == 1 && value3 == 1)
    {
        return true;
    }
    else
    {
        return  false;
    }
}

/*
NOTICE: Joystick has not been created, thus I comment out this function


void SmoothJoystick::buttonUpdate(int Button_number)
//push the values down
{
    if(GetSmoothButton(Button_number))
    {
        (buttons.at(Button_number)).set(driverJoystick->GetRawButton(Button_number));
    }
}
*/
