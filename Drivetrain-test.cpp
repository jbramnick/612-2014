#include "Drivetrain-test.h"

Drivetrain::Drivetrain
{
    left_motor1.set(0);
    left_motor2.set(0);
    right_motor1.set(0);
    right_motor2.set(0);
}

Drivetrain::~Drivetrain
{

}


void Drivetrain::control_left2_talons()
{
    if(Backwards == true)
    {
        if(LeftWheelsOn == true)
        {
            left_motor1.set(-0.7);
            left_motor2.set(-0.7);

        }else
        {
            left_motor1.set(0);
            left_motor2.set(0);
        }
    }else
    {
        if(LeftWheelsOn == true)
        {
            left_motor1.set(0.7);
            left_motor2.set(0.7);

        }else
        {
            left_motor1.set(0);
            left_motor2.set(0);
        }
    }
}

void Drivetrain::control_right2_talons()
{
    if(Backwards == true)
    {
        if(RightWheelsOn == true)
        {
            right_motor_1.set(-0.7);
            right_motor_2.set(-0.7);
        }else
        {
            right_motor_1.set(0);
            right_motor_2.set(0);
        }
    }else
    {
        if(RightWheelsOn == true)
        {
            right_motor_1.set(0.7);
            right_motor_2.set(0.7);
        }
    }
}

void Drivetrain::configure_low_gear()
{

}

void Drivetrain::configure_high_gear()
{

}
