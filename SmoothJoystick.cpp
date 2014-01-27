#include "SmoothJoystick.h"
#include "controls.h"
#include <vector>
#include <bitset>
//#include <EmperorKoch.h>

void SmoothJoystick::addJoyFunctions(joyFunctions controlFunctions, joyfuncObjects controlObjects)
{
    Objects.push_back(controlFunctions);
    joystickFuncs.push_back(controlObjects);
}

void SmoothJoystick::updateJoyFunctions()
{
    for(unsigned int k = 0; k < Objects.size(); j++)
    {
        //in the format of f(object)
        (joystickFuncs.at(k))(Objects.at(k));
    }
}

void SmoothJoystick::addButtons()
{
    buttons.push_back(aButtonSet<3>(driverJoystick->GetRawButton(1)));
    buttons.push_back(bButtonSet<3>(driverJoystick->GetRawButton(2)));
    buttons.push_back(xButtonSet<3>(driverJoystick->GetRawButton(3)));
    buttons.push_back(yButtonSet<4>(driverJoystick->GetRawButton(4)));
    buttons.push_back(lbButtonSet<5>(driverJoystick->GetRawButton(5)));
    buttons.push_back(rbButtonSet<6>(driverJoystick->GetRawButton(6)));
    buttons.push_back(backButtonSet<7>(driverJoystick->GetRawButton(7)));
    buttons.push_back(startButtonSet<8>(driverJoystick->GetRawButton(8)));
}

void SmoothJoystick::checkSmooth()
{
    for(unsigned int l = 0; l < buttons.size(); l++)
    {
        if((buttons.at(l)).all == 1)
        {
            joystickFuncs.at(l);
        }
    }
}
