#include <RobotDrive.h>
#include <SpeedController.h>
#include <Joystick.h>
#include <String>

#ifndef SMOOTHJOYSTICK_H
#define SMOOTHJOYSTICK_H
Class SmoothJoystick
{
	public:
		static const bool LeftWheelsOn;
		static const bool RightWheelsOn;
		SmoothJoystick();
		void failsafe();
		void ChangeGear();
		void Forward();
		void Backwards();
		void Left();
		void Right();
		void checksmooth();

		enum gear
		{
            high
            low
		};
}

#endif
