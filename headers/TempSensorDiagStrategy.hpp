#pragma once
#include "DiagnosticStrategy.hpp"

#define WARNING_THRESHOLD   80
#define CRITICAL_THRESHOLD  100

class TempSensorDiagStrategy : public DiagnosticStrategy {
    private:
    
    public:
    void analyze(int reading) override;
    
};