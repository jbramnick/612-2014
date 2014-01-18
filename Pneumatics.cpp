#include <vector>
#include <IterativeRobot.h>
#include <DigitalInput.h>
#include <Relay.h>
#include <Timer.h>
#include <DoubleSolenoid.h>
#include "Pneumatics.h"
#include "DriveTrain.h"


Pneumatics::Pneumatics(uint8_t digitalMod, uint32_t digitalChannel,
                        uint8_t compModuleNumber, uint32_t compChannel)
{
    switchObject = new DigitalInput(digitalMod, digitalChannel);
    compressor = new Relay(compModuleNumber, compChannel, Relay::kForwardOnly);
    solenoidTimer = new Timer();
}

void Pneumatics::checkPressure()
{
    if(switchObject->Get() == 1)
    {
        compressor->Set(Relay::kForward);
    }
    else
    {
        compressor->Set(Relay::kOff);
    }
}

void Pneumatics::updateSolenoid()
{
    //This function checks if the solenoid has expired
    for(int i = 0; i < (int)time.size(); i++)
    {
        if(timerObject[i]->Get() >= time[i])
        {
            solenoid[i]->Set(DoubleSolenoid::kOff);
            //next, remove from vector
        }
    }
}

void Pneumatics::setVectorValues(double timerValues, DoubleSolenoid* startSolenoid, Timer* foo)
{
    solenoidTimer = new Timer();
    time.push_back(timerValues);
    solenoid.push_back(startSolenoid);
}
