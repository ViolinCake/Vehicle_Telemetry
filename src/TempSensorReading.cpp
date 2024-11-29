#include "TempSensorReading.hpp"
#include<cstdlib>
#include<iostream>
#include <string>
#include "logger.hpp"

//contains the reading generator algorithm for each sensor type
int TempSensorReading::ReadingGenerator(){
    tempreading    =   rand()  %   120;
    
    return tempreading;    
}
int TempSensorReading::GetReading ()  
{
    std::cout<<"GetReading temperature = "<<tempreading<<'\n';
    //logger::getInstance().log("vehicle speed =  "+std::to_string(speereading));
    return tempreading;
}
const char* TempSensorReading::GetReadingType(){
    return "temperature";
}
void TempSensorReading::SetReading(int value){
    
}