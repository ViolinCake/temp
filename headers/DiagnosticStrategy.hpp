#pragma once
#include "SensorReading.hpp"
#include <iostream>
#include <memory>
class DiagnosticStrategy {
    protected:

    public:
    //virtual void analyze(std::unique_ptr<SensorReading> reading){std::cout<<"ping"<<'\n';};
    virtual void analyze(std::unique_ptr<SensorReading> reading) = 0;
    virtual ~DiagnosticStrategy()= default;
};