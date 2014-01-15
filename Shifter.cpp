#include "Shifter.h"

Shifter::Shifter()
{
    shifter->Set(0)
    //TODO
}

Shifter::~Shifter()
{
    //TODO
}

void Shifter::shift()
{

}

void Shifter::fowards()
{
    shifter->Set(1);
}

void Shifter::backwards()
{
    shifter->Set(-1);
}
