#include "Smoothjoystick.h"
using namespace std;

SmoothJoystick::Smoothjoystick()
{
    gear = "low";
    LeftWheelsOn = false;
    RightWheelsOn = false;
}

Smoothjoystick::~Smoothjoystick()
{

}

void Smoothjoystick::failsafe()
{
    while(/*Start button pressed*/)
    {
        gear = "low";
        LeftWheelsOn = false;
        RightWheelsOn = false;
    }
}

void Smoothjoystick:Change_Gear()
{
	while(/*Y button is pressed*/) //toggles gear
	{
		if(gear == high)
		{
			gear = low;
		}
		else()
		{
			gear = high;
		}
	}
}

void Smoothjoystick::Forward()
{
    while(/*left thumbstick on up*/)
    {
        RightWheelsOn = true;
        LeftWheelsOn = true;
    }

    while(/*left joystick neutral*/)
	{
        RightWheelsOn = false;
        LeftWheelsOn = false;
	}
}

void Smoothjoystick::Backwards()
{
    while(/*Left thubbstick on down*/)
    {
        RightWheelsOn = true;
        LeftWheelsOn = true;
    }

	while(/*left joystick neutral*/)
	{
        RightWheelsOn = false;
        LeftWheelsOn = false;
	}
}

void Smoothjoystick::Right()
{
    while("Right thumbstick on right")
    {
        LeftWheelsOn = true;
    }
}

void Smoothjoystick::Left()
{
    while(Right thumbstick on left)
    {
        RightWheelsOn = true;
    }
}


void Smoothjoystick::checksmooth()
{

}
