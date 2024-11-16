#include "SpeedSensorReading.hpp"
#include <cstdlib>
#include <iostream>
//contains the reading generator algorithm for each sensor type
int SpeedSensorReading::GetReading ()  
{
    speed   =   rand() % 250;
    std::cout<<"speed is "<<speed<<'\n';
    return speed;
}