#include "SpeedSensorReading.hpp"
#include<cstdlib>
#include<iostream>
#include <string>
#include "logger.hpp"
//contains the reading generator algorithm for each sensor type
int SpeedSensorReading::ReadingGenerator(){
    speedreading    =   rand()  %   251;
    
    return speedreading;    
}
int SpeedSensorReading::GetReading ()  
{
    std::cout<<"GetReading speed = "<<speedreading<<'\n';
    //logger::getInstance().log("vehicle speed =  "+std::to_string(speedreading));
    return speedreading;
}
void SpeedSensorReading::SetReading (int value)  
{
    
    speedreading    =   value;
}
const char* SpeedSensorReading::GetReadingType(){
    return "speed";
}