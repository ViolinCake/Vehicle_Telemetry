#include "SpeedSensorDiagStrategy.hpp"
#include <iostream>
//#include "SpeedSensor.hpp"

void SpeedSensorDiagStrategy::analyze(std::unique_ptr<SensorReading> reading)  {
    int speed;
    std::cout<<"start analyzing"<<'\n';
    speed=reading->ReadingGenerator();

    if(speed>200){
        //Send Request to the ECU to slow down
        std::cout<<"send request to the ECU to slow down"<<'\n';
    }
}





