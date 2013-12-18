#include "Smoothjoystic.h"
using namespace std;

SmoothJoystick::Smoothjoystick()
{
    gear = "low";
    LeftWheelSpeed = 0;
    RightWheelSpeed = 0;
}

Smoothjoystick::~Smoothjoystick()
{

}

void Smoothjoystick::failsafe()
{
    while(/*Start button pressed*/)
    {
        gear = "low";
        LeftWheelSpeed = 0;
        RightWheelSpeed = 0;
    }
}

void Smoothjoystick:High_Gear()
{
    while(/*Y button pressed*/)
    {
        if(gear != "high")
        {
            gear = "high";
        }
    }
}

void Smoothjoystick::Low_Gear()
{
    while(/*Y button pressed*/)
    {
        if(gear != "low")
        {
            gear = "low";
        }
    }
}

void Smoothjoystick::Forward()
{
    while(/*left thumbstick on up*/)
    {
        if(gear = "high")
        {
            LeftWheelSpeed = 1.0;
            RightWheelSpeed = 1.0;
        }else if(gear = "low")
        {
            LeftWheelSpeed = 0.5;
            RightWheelSpeed = 0.5;
        }
    }
}

void Smoothjoystick::Backwards()
{
    while(/*Left thubbstick on down*/)
    {
        if(gear = "High")
        {
            LeftWheelSpeed = -1.0;
            RightWheelSpeed = -1.0;
        }else if(gear = "low")
        {
            LeftWheelSpeed = -0.5;
            RightWheelSpeed = 0.5;
        }
    }
}
void Smoothjoystick::Right()
{
    while(/*Right thumbstick on right*/)
    {
        LeftWheelSpeed = 0.5;
    }
}

void Smoothjoystick::Left()
{
    while(/*Right thumbstick on left*/)
    {
        RightWheelSpeed = 0.5;
    }
}

void Smoothjoystick::checksmooth()
{

}
