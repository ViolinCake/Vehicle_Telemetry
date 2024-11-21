#include "ACC.hpp"
#include <iostream>
#include <string>
#include "logger.hpp"
void ACC::slowdown(){
    std::cout<<"slowing down..."<<'\n';
    /*set speedreading here*/
    
    SetReading(50);
    logger::getInstance.log("HIGH SPEED...slowing down...   speed   =   "+std::to_string(speedreading));
}
void ACC::hitbreak(){
    std::cout<<"hit break..."<<'\n';
}
void ACC::batteryalert(){
    std::cout<<"battery low..."<<'\n';
}