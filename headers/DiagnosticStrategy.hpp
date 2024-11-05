#pragma once
class DiagnosticStrategy : public Sensor {

    public:
    virtual void diagnose() const =0; // it just delegates to analyze() function

    virtual void analyze(const Sensor& sensor) const =0;
    
}