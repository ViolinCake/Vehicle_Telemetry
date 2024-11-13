#include<iostream>
#include <memory>
#include "Sensor.hpp"
#include "SpeedSensorReading.hpp"
#include "SpeedSensorDiagStrategy.hpp"

int main(){

    // std::vector<Sensor*> sensors;
    // addSensor(&SpeedSensor,sensors);

    
    // sensors.push_back(&SpeedSensor);
    /*for later development*/
    //sensors.push_back(&TempSensor);


    Sensor speedsensor(std::make_unique<SpeedSensorDiagStrategy>(),std::make_unique<SpeedSensorReading>());
    speedsensor.diagnose(); /*this will be a delegate by the Sensor class 
                            but implemented in the DiagStrategy interface*/
    
    // for(Sensor* sensor : sensors){
    //     std::cout<<"sensor type is "<<sensor->GetsensorType()<<'\n';
    // }
    return 0;
}
/*
sensors.push_back()
for(Sensor* sensor : sensors){
        sensor->StartDiagnose();
    }


*/