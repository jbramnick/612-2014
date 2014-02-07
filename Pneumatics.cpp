#include <vector>
#include <IterativeRobot.h>
#include <DigitalInput.h>
#include <Relay.h>
#include <Timer.h>
#include <DoubleSolenoid.h>
#include "Pneumatics.h"
#include "DriveTrain.h"
#include "612.h"
#include "main.h"


Pneumatics::Pneumatics(uint8_t digitalMod, uint32_t digitalChannel,
                        uint8_t compModuleNumber, uint32_t compChannel)
{
    switchObject = new DigitalInput(digitalMod, digitalChannel);
    compressor = new Relay(compModuleNumber, compChannel, Relay::kForwardOnly);
    robot -> update -> addFunctions(&UpdateHelper, (void*) this);
    printf("Phhhhooooooooooomatics have been updated\n");
}

void Pneumatics::checkPressure()
{
    if(switchObject->Get() == 1)
    {
        compressor->Set(Relay::kOff);
    }
    else
    {
        compressor->Set(Relay::kForward);
    }
}

void Pneumatics::updateSolenoid()
{
    //This function checks if the solenoid has expired
    for(unsigned int i = 0; i < time.size();)
    {
        if(timerObject[i]->Get() >= time[i])
        {
            solenoid[i]->Set(DoubleSolenoid::kOff);
            solenoid.erase(solenoid.begin()+i);
            time.erase(time.begin()+i);
            timerObject.erase(timerObject.begin()+i);
        }
        else
        {
            i++;
        }
    }
}

void Pneumatics::setVectorValues(double timerValues, DoubleSolenoid* startSolenoid, DoubleSolenoid::Value value)
{
    Timer* solenoidTimer = new Timer();
    time.push_back(timerValues);
    timerObject.push_back(solenoidTimer);
    solenoid.push_back(startSolenoid);
    startSolenoid->Set(value);
    solenoidTimer->Start();
}

void Pneumatics::UpdateHelper(void* instName)
{
    Pneumatics* pnumObj = (Pneumatics*)instName;
    pnumObj -> checkPressure();
    pnumObj -> updateSolenoid();
}
