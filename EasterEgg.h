#include <AnalogChannel.h>
#include "ports.h"
#include "main.h"
#include "612.h"

class sensors
{
    AnalogChannel* ultrasonic;
    AnalogChannel* infraredShooter;
    AnalogChannel* infraredLoad;

    sensors(uint8_t isModNumber, uint32_t usChannel, uint8_t isModNumber, uint32_t isModChannel,            uint8_t ilModNumber, uint32_t ilChannel);
    ~sensors();
public:
    float getInfraredShooter();
    bool getInfraredLoad();
    float getUltrasonic();
    static void updateHelper(void* instName);
};
