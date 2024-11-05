#include<iostream>
#include "Diagnostics.hpp"

int main(){

    std::vector<Sensor*> sensors;
    addSensor(&SpeedSensor,sensors);
    
    // sensors.push_back(&SpeedSensor);
    /*for later development*/
    //sensors.push_back(&TempSensor);
     
    for(Sensor* sensor : sensors){
        std::cout<<"sensor type is "<<sensor->GetsensorType()<<'\n';
    }
    return 0;
}