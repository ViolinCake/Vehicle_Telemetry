//#include "Sensor.hpp"
#pragma once
#include "DiagnosticStrategy.hpp"
#include "SensorReading.hpp"
#include <iostream>
#include <memory>
#include <string>
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
    std::cout<<"moved pointer in Sensor.hpp"<<'\n';
    strat->analyze(reading->GetReading()); /*we need to send the actual reading 
                                                instead of moving pointer*/

}
int generate() /*delegation for the ReadingGenerator() function*/
{
    return reading->ReadingGenerator();
}
int GetReading_()  /*delegation for the GetReading() function*/
{
    return reading->GetReading();
}
const char* GetReadingType_()
{
    return reading->GetReadingType();
}

};