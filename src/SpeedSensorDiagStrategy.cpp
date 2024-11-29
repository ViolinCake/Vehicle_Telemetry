#include "SpeedSensorDiagStrategy.hpp"
#include "ACC.hpp"
#include <iostream>
//#include "SpeedSensor.hpp"

void SpeedSensorDiagStrategy::analyze(std::unique_ptr<SensorReading> reading)  {
    int speed;
    ACC action;
    std::cout<<"start analyzing"<<'\n';
    speed=reading->GetReading();
    std::cout<<"generated reading   =   "<<speed<<'\n';

    if(speed>HIGH_SPEED){
        //Send Request to the ECU to slow down
        std::cout<<"send request to the ECU to slow down"<<'\n';
        action.slowdown(SAFE_SPEED);

    }
}





