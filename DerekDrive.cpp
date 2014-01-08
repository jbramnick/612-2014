#include "RobotDrive.h"
//#include "main.h"

DerekDrive::DerekDrive(SpeedController* frontLeft,SpeedController* frontRight,SpeedController* backLeft,SpeedController* backRight,void* o):
RobotDrive(a,b,c,d),
{
    isAsync = false;
    robot_class* robot = (robot_class*)o;
    drivePower = 1.0;
    //shift LOW (or high, but we need to have a default as seen from last year)
}
    
DerekDrive::~DerekDrive()
{

}
DerekDrive::autoDrive(float left, float right) 
{
    frontLeft.Set(1.0f);
    frontRight.Set(1.0f);
    backLeft.Set(1.0f);
    backRight.Set(1.0f);
}
DerekDrive::autoRotate()
{
    //TODO
}
DerekDrive::doTeleOp()
{
    //do controls
    //TODO
}
DerekDrive::shift(gear g)
{
    //TODO
    if (g == HIGH)
    {
        //shift LOW
        g = LOW;
    }
    else 
    {
        //shift HIGH
        g = HIGH;
    }
}
DerekDrive::stop()
{
    frontLeft.Disable();
    frontRight.Disable();
    backLeft.Disable();
    backRight.Disable();
    //set jags to 0,0
}
DerekDrive::setSafety()
{
    //TODO
}
DerekDrive::update(boolean mode)
{
    //TODO
}
