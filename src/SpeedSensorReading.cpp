#include "SpeedSensorReading.hpp"
#include<cstdlib>
#include<iostream>
//contains the reading generator algorithm for each sensor type
int SpeedSensorReading::ReadingGenerator(){
    speedreading    =   rand()  %   251;
    return speedreading;    
}
int SpeedSensorReading::GetReading ()  
{
    std::cout<<"GetReading speed = "<<speedreading<<'\n';
    return speedreading;
}
void SpeedSensorReading::SetReading (int value)  
{
    
    speedreading    =   value;
}