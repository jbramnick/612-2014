#inlcude "Smoothjoystick.h"
#include "Smoothjoystick.cpp"
#include <Servo.h>
#include <Talon.h>

#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
Class Drivetrain()
{
	public:
		void control_left2_talons();
		void control_right2_talons();
		void configure_low_gear();
		void confidure_high_gear();

		//shitfer servos
		Servo shifter1;
		Servo shifter2;

		//declare talons
		Talon *left_motor1;
        left_motor1 = new Talon(1);

		Talon *left_motor2;
        left_motor2 = new Talon(1);

        Talon *right_motor1;
        right_motor1 = new Talon(1);

        Talon *right_motor2;
        right_motor2 = new Talon(1);

}
#endif
