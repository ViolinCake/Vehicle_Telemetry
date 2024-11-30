#include "ACC.hpp"
#include <iostream>
#include <string>
#include "logger.hpp"
#include "Sensor.hpp"
#include "SpeedSensorDiagStrategy.hpp"
void ACC::slowdown(int speedthreshold){
    std::cout<<"slowing down..."<<'\n';
    
    //while(GetReading()>=SAFE_SPEED){
            SetReading(GetReading()-10);
            logger::getInstance().log("HIGH SPEED...slowing down...   speed   =   "+std::to_string(GetReading()));
        //}
    
    
    
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