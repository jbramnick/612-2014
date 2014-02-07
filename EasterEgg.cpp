#include <AnalogChannel.h>
#include "ports.h"
#include "EasterEgg.h" //<--- this :D
#include "main.h"
#include "612.h"

sensors::sensors(uint8_t usModNumber, uint32_t usChannel, uint8_t isModNumber, uint32_t isChannel,                 uint8_t ilModNumber, uint32_t ilChannel)
{
    ultrasonic = new AnalogChannel(usModNumber, usChannel);
    infraredShooter = new AnalogChannel(isModNumber, isChannel);
    infraredLoad = new AnalogChannel(ilModNumber, ilChannel);
     robot -> update -> addFunctions(&updateHelper, (void*)this);
}

sensors::~sensors()
{

}

//all values are in centemeters

float sensors::getInfraredShooter()
{
    return (infraredShooter->GetVoltage() * 18.777);
}

bool sensors::getInfraredLoad()
{
    float loadDistance = infraredLoad->GetVoltage() * 18.777;
    if(loadDistance < 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

float sensors::getUltrasonic()
{
    return (((ultrasonic->GetVoltage()) / 9.8) * 2.54);
}

void updateHelper(void* instName)
{
    sensors* sensorObj = (sensors*)instName;
    sensorObj->getInfraredShooter();
    sensorObj->getInfraredLoad();
    sensorObj->getUltrasonic();
}

