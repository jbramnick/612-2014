#include <RobotDrive.h>
#include <SpeedController.h>
#include <Joystick.h>
#include <String>

#ifndef SMOOTHJOYSTICK_H
#define SMOOTHJOYSTICK_H

Class SmoothJoystick
{
	public:
		static const string gear_level;
		static const int LeftWheelSpeed;
		static const int RightWheelSpeed;
		SmoothJoystick();
		void failsafe();
		void High_Gear();
		void Low_Gear();
		void Forward();
		void Backwards();
		void Left();
		void Right();
		void checksmooth();
}

#endif
