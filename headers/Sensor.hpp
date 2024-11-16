//#include "Sensor.hpp"
#include "DiagnosticStrategy.hpp"
#include "SensorReading.hpp"
#include <iostream>
#include <memory>
class Sensor {
protected:

public:
std::unique_ptr<DiagnosticStrategy> strat;
std::unique_ptr<SensorReading> reading;
Sensor(){}

Sensor(std::unique_ptr<DiagnosticStrategy> strat_,std::unique_ptr<SensorReading> reading_) : 
strat(std::move(strat_)),reading(std::move(reading_)) {}

void diagnose()  /*delegation for the analyze() function*/
{
    std::cout<<"start diagnosing"<<'\n';
    strat->analyze(std::move(reading));

}

};