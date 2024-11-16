#include "ACC.hpp"
#include <iostream>
void ACC::hitBreak(){
    std::cout<<"proximity detected...hit the break"<<'\n';
}
void ACC::slowDown(){
    //here we should set teh speed value from SpeedSensorReading class to lower value

    std::cout<<"speed limit reached...slow down"<<'\n';
    Reading.speed   =   50;
    
}
void ACC::batteryAlert(){
    std::cout<<"Battery low...reach for the nearest charg point"<<'\n';
}
