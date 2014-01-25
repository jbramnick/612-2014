#ifndef SHIFTER_H_INCLUDED
#define SHIFTER_H_INCLUDED
#include <DoubleSolenoid.h>
#include <Timer.h>
#include "Pneumatics.h"

class Shifter
{
public:
    Shifter(uint8_t mod,uint32_t chanF,uint32_t chanR);
    ~Shifter();
    void shiftGear();
    void setHigh();
    void setLow();
    DoubleSolenoid* shifter;
    Pneumatics* pneumatics;
    enum Gear {high,low};
    Gear gear;
    const static double TIME= 0.1;
};


#endif // SHIFTER_H_INCLUDED
