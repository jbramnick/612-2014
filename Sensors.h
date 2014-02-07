#include <AnalogChannel.h>
#include "ports.h"
#include "main.h"
#include "612.h"

class sensors
{
    AnalogChannel* ultrasonic;
    AnalogChannel* infraredShooter;
    AnalogChannel* infraredLoad;

    sensors(uint8_t ISMODNUMBER, uint32_t USCHANNEL, uint8_t ISMODNUMBER, uint32_t ISCHANNEL,
            uint8_t ILMODNUMBER, uint32_t ILCHANNEL);
    ~sensors();
public:
    float getInfraredShooter();
    bool getInfraredLoad();
    float getUltrasonic();
    static void updateHelper(void* instName);
};
