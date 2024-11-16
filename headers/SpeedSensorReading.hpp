#pragma once
#include "SensorReading.hpp"

class ACC;  //forward declaration for friend usage
class SpeedSensorReading : public SensorReading {

private:
int speed=0;
public:
int GetReading();
friend class ACC;
};