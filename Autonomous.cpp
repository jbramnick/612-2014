#include "Autonomous.h"
#include "main.h"
#include "ports.h"
#include "612.h"

Autonomous::Autonomous()
{
}
Autonomous::~Autonomous()
{
}
void Autonomous::forward(double distance)
{
    robot->drive->autoDrive(distance);
}
void Autonomous::turn(double degrees)
{
    robot->drive->autoTurn(degrees);
}
void Autonomous::tilt(int degrees)        // needs to tilt a certain degrees, probably starting from below going up
{
    robot->shoot->pitchAngle(degrees);
}
void Autonomous::releaseClamp()
{
    robot->shoot->clampUp();
}
void Autonomous::shootBall()
{
}
/*
void Autonomous::vision()
{
}
*/
bool Autonomous::timePassed(float time)
{
    return (timer->HasPeriodPassed(time));
}
/*
double Autonomous::getTime()
{
}
*/
void Autonomous::update(State stage, double distance, double degreesTurn, int degreesTilt)
{
    switch (stage)
    {
        case DRIVING:
            forward(distance);
            break;
        case TURNING:
            turn(degreesTurn);
            break;
        case AIMING:
            tilt(degreesTilt);
            break;
        case SHOOTING:
            shootBall();
            break;
        case IDLE:
            break;
        default:
            break; 
    }
}


