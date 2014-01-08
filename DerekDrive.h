#ifndef ROBOT_DRIVE_H
#define ROBOT_DRIVE_H

#include <RobotDrive.h>
#include <SpeedController.h>
//#include "main.h"

class DerekDrive : public RobotDrive 
{
    public:
        RobotDrive(SpeedController*,SpeedController*,SpeedController*,SpeedController*,void*);
        ~DerekDrive();
        void autoDrive();
        void autoRotate();
        void doTeleOp();
        void stop();
        static void shift();
    private:
        float drivePower; // 1.0 Normal and 0.6 Climbing
        enum gear
        {
            HIGH,
            LOW
        };
        boolean isAsync;
};
#endif
