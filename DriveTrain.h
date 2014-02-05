#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H

#include <RobotDrive.h>
#include "EncodeDistance.h"
#include "ports.h"

class DriveTrain : public RobotDrive
{
public:
    DriveTrain(uint8_t modFL,uint32_t chanFL,uint8_t modRL,uint32_t chanRL,uint8_t modFR,uint32_t chanFR,uint8_t modRR,uint32_t chanRR);
    ~DriveTrain();
    enum Dir{RIGHT, LEFT};
    void autoDrive(double distance);
    void autoTurn(double degrees);
    void teleTurn(Dir direction, double power);
    void update();
<<<<<<< HEAD

    bool isAuto();    
    static void updateHelper(void* instName);
=======
    static void updateHelper(void* instName);
    bool isAuto();
    void stopAuto();
>>>>>>> 1e31d8bb7e947f54bf1c5005de0f9101ed607617
    EncodeDistance* encode;
    static bool isMovingL;
    static bool isMovingR;
    static bool isTurningL;
    static bool isTurningR;
    double NeededDist;
    static const float SPEED;
    static const double PI;
    static const double ROBOTRAD = 1;
    static const double CIRCUMROBOT;
};

#endif // DRIVETRAIN_H
