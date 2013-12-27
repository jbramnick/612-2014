#include "main.h"

robot_class::robot_class()
{
    switch1 = new DigitalInput(2, 2);
    compressor = new Relay(2, 2, kBothDirections);
}

robot_class::~robot_class()
{
    delete switch1;
    delete compressor;
}

void robot_class::RobotInit()
{
    
}

void robot_class::DisabledInit()
{
    
}

void robot_class::AutonomousInit()
{
    
}

void robot_class::TeleopInit()
{
    
}

void robot_class::TestInit()
{
    compressor -> Set(kOn);
}

void robot_class::DisabledPeriodic()
{
    
}

void robot_class::AutonomousPeriodic()
{
    
}

void robot_class::TeleopPeriodic()
{

}

void robot_class::TestPeriodic()
{
    if (switch1->Get() == 1)
    {
        compressor -> Set(kForward);
    }
    if (switch1->Get() == 0)
    {
        compressor -> Set(kOff);
    }
}

START_ROBOT_CLASS(robot_class);
