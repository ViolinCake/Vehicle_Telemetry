#include "TempSensorDiagStrategy.hpp"
#include "ACC.hpp"
#include <iostream>
//#include "SpeedSensor.hpp"

void TempSensorDiagStrategy::analyze(std::unique_ptr<SensorReading> reading)  {
    int temp;
    ACC action;
    std::cout<<"start analyzing"<<'\n';
    temp=reading->GetReading();
    std::cout<<"generated reading   =   "<<temp<<'\n';

    if(temp>200){
        //Send Request to the ECU to slow down
        std::cout<<"send request to the ECU to slow down"<<'\n';
        action.slowdown();

    }
}





