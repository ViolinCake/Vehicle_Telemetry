#pragma once
#include "DiagnosticStrategy.hpp"

class TempSensorDiagStrategy : public DiagnosticStrategy {
    private:
    
    public:
    void analyze(std::unique_ptr<SensorReading> reading) override;
    
};