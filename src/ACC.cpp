#include "ACC.hpp"
#include <iostream>
#include <string>
#include "logger.hpp"
#include "Sensor.hpp"
void ACC::slowdown(){
    std::cout<<"slowing down..."<<'\n';
    /*set speedreading here*/
    
    SetReading(50);
    logger::getInstance().log("HIGH SPEED...slowing down...   speed   =   "+std::to_string(GetReading()));
}
void ACC::hitbreak(){
    std::cout<<"hit break..."<<'\n';
}
void ACC::batteryalert(){
    std::cout<<"battery low..."<<'\n';
}
void ACC::tempalert(){
    std::cout<<"high tempereture..."<<'\n';
}