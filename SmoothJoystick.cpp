#include "SmoothJoystick.h"
#include "controls.h"
#include <vector>
#include <bitset>
#include "612.h"
#include "main.h"

//#include <EmperorKoch.h>

SmoothJoystick::SmoothJoystick(uint32_t port): Joystick(port)
{
     TRIGGER_TOLERANCE = 0.1;
     robot -> update -> addFunctions(&updateHelper, (void*)this);
}

SmoothJoystick::~SmoothJoystick()
{

}

void SmoothJoystick::addJoyFunctions(joyFunctions controlFunctions, joyfuncObjects controlObjects, uint32_t btn)
{
    Objects.push_back(controlObjects);
    joystickFuncs.push_back(controlFunctions);
    joyfuncButtons.push_back(btn);
    funcBools.push_back(false);
}

void SmoothJoystick::updateJoyFunctions()
{
    for(unsigned int k = 0; k < funcBools.size(); k++)
    {
        /*in the format of f(object)
        loop check to see if function was called before so that it runs once*/
        if(GetSmoothButton(joyfuncButtons.at(k)))
        {
            if(!funcBools.at(k))
            {
                (joystickFuncs.at(k))(Objects.at(k));
                funcBools.at(k)=true;
            }
        }
        else
        {
            funcBools.at(k)=false;
        }
    }
}

void SmoothJoystick::addButtons()
{
    int m = 0;

    std::bitset<3>* newButton = new std::bitset<3>();

    do
    {
        buttons.push_back(newButton);
        m = m + 1;
    }
    while (m < amountOfButtons);//don't know where this goes :P
}

bool SmoothJoystick::GetSmoothButton(int Button_number)
{
    int value1 = (buttons.at(Button_number))->at(0);
    int value2 = (buttons.at(Button_number))->at(1);
    int value3 = (buttons.at(Button_number))->at(2);

    if(value1 == 1 && value2 == 1 && value3 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void SmoothJoystick::buttonUpdate()
{
    for(int k = 0; k < amountOfButtons; k++)
    {
        std::bitset<3>* btnSet = buttons.at(k);
        btnSet->at(2) = btnSet->at(1);
        btnSet->at(1) = btnSet->at(0);
        btnSet->at(0) = GetRawButton(k);
    }
}

double SmoothJoystick::isAxisZero(uint32_t axis)//accepts axis port, returns 1 or -1 if axis value is in the Trigger tolerance range
{
    double a = GetRawAxis(axis);
    if(a < 0)
    {
        a = (a * -1);
    }
    if(a < TRIGGER_TOLERANCE)
    {
        if(GetRawAxis(axis) > 0)
        {
            return TRIG_R;
        }
        else
        {
            return TRIG_L;
        }
    }
    else
    {
        return TRIG_NONE;
    }
}

void SmoothJoystick::updateHelper(void* instName)
{
    SmoothJoystick* smoothObj = (SmoothJoystick*)instName;
    smoothObj -> updateJoyFunctions();
    smoothObj -> buttonUpdate();
}
