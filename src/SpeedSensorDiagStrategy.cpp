#include "SpeedSensorDiagStrategy.hpp"
#include <iostream>
#include "ACC.hpp"


void SpeedSensorDiagStrategy::analyze(std::unique_ptr<SensorReading> reading)  {
    int speed;

    ACC action;
    std::cout<<"start analyzing"<<'\n';
    speed=reading->GetReading();

    if(speed>200){
        //Send Request to the ECU to slow down
        action.slowDown();
        std::cout<<"send request to the ECU to slow down"<<'\n';
    }
}





