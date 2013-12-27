#ifndef MAIN_H
#define MAIN_H

#include <IterativeRobot.h>
#include "DigitalInput.h"
#include "Relay.h"

class robot_class : public IterativeRobot
{
    public:
        robot_class();
        
        void RobotInit();
        void DisabledInit();
        void AutonomousInit();
        void TeleopInit();
        void TestInit();
        
        void DisabledPeriodic();
        void AutonomousPeriodic();
        void TeleopPeriodic();
        void TestPeriodic();
        
        DigitalInput* Switch1;
        Relay* compressor;
};

#endif MAIN_H
