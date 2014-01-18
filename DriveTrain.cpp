#include "DriveTrain.h"
#include <RobotDrive.h>
#include <Talon.h>

DriveTrain::DriveTrain(uint8_t modFL,uint32_t chanFL,
                       uint8_t modRL,uint32_t chanRL,
                       uint8_t modFR,uint32_t chanFR,
                       uint8_t modRR,uint32_t chanRR)
           :RobotDrive(new Talon(modFL,chanFL),
                       new Talon(modRL,chanRL),
                       new Talon(modFR,chanFR),
                       new Talon(modRR,chanRR))
{
}

DriveTrain::~DriveTrain()
{
}

void DriveTrain::autoDrive(float distance)
{
    //TODO
}

void DriveTrain::autoTurn(float degrees)
{
    //TODO
}

void DriveTrain::stop()
{
    //TODO
}
