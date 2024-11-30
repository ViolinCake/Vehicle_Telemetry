#pragma once
#include "DiagnosticStrategy.hpp"
#define SAFE_SPEED  50
#define HIGH_SPEED  200
#define CAR_STOPPED 0
class SpeedSensorDiagStrategy : public DiagnosticStrategy {
    private:
    
    public:
    void analyze(int reading) override;
    
};