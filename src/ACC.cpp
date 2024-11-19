#include "ACC.hpp"
#include <iostream>

void ACC::slowdown(){
    std::cout<<"slowing down..."<<'\n';
    /*set speedreading here*/
    SpeedSensorReading speedreadingObj;
    SetReading(50);
    GetReading();
}
void ACC::hitbreak(){
    std::cout<<"hit break..."<<'\n';
}
void ACC::batteryalert(){
    std::cout<<"battery low..."<<'\n';
}