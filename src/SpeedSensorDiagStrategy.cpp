#include "SpeedSensorDiagStrategy.hpp"
#include "ACC.hpp"
#include <iostream>
//#include "SpeedSensor.hpp"

void SpeedSensorDiagStrategy::analyze(int reading)  {
    
    ACC action;
    std::cout<<"start analyzing"<<'\n';
    
    std::cout<<"generated reading   =   "<<reading<<'\n';

    if(reading>HIGH_SPEED){
        //Send Request to the ECU to slow down
        std::cout<<"send request to the ECU to slow down"<<'\n';
        action.slowdown(SAFE_SPEED);

    }
}





