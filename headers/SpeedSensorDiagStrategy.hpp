#pragma once
#include "DiagnosticStrategy.hpp"

class SpeedSensorDiagStrategy : public DiagnosticStrategy {
    private:
    
    public:
    void analyze(std::unique_ptr<SensorReading> reading) override;
    
};