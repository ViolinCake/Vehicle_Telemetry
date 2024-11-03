#pragma once
#include "SpeedSensor.hpp"
#include "DiagnosticStrategy.hpp"

class SpeedSensorDiagStrategy : public SpeedSensor{

    public:
    void analyze() override;

};