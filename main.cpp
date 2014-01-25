#include "main.h"
#include <DigitalInput.h>
#include <Relay.h>
#include <Joystick.h>

main_robot::main_robot()
{

}

main_robot::~main_robot()
{
}

void main_robot::RobotInit()
{
    driverJoy = new Joystick(1);
    gunnerJoy = new Joystick(2);
    pnum = new Pneumatics(1,8,1,8); // TODO Placeholder for the ports
    shift = new Shifter(1,7,8);
    shift->setHigh();
}
void main_robot::TeleopInit()
{

}
void main_robot::AutonomousInit()
{

}
void main_robot::TestInit()
{

}
void main_robot::DisabledInit()
{
    
}
void main_robot::TeleopPeriodic()
{
    //float left = driverJoy->GetRawAxis(2);
    //float right = driverJoy->GetRawAxis(5);
    // drive->TankDrive(left, right);
}

void main_robot::AutonomousPeriodic()
{
}

void main_robot::DisabledPeriodic()
{

}
void main_robot::TestPeriodic()
{
    pnum->checkPressure();
    pnum->updateSolenoid();
    if(gunnerJoy->GetRawButton(5))
    {
        if(shift->gear!=Shifter::low)
        {
            shift->setLow();
        }
    }
    else if(gunnerJoy->GetRawButton(6))
    {
        if(shift->gear!=Shifter::high)
        {
            shift->setHigh();
        }
    }
}

START_ROBOT_CLASS(main_robot)