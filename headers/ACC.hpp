#include<iostream>
#include "SpeedSensorReading.hpp"
class ACC {

private:

public:
ACC(){std::cout<<"default ACC constructor"<<'\n';}
SpeedSensorReading Reading;
void slowDown();
void hitBreak();
void batteryAlert();

};