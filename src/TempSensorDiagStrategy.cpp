#include "TempSensorDiagStrategy.hpp"
#include "SpeedSensorDiagStrategy.hpp"
#include "logger.hpp"
#include "ACC.hpp"
#include <iostream>
//#include "SpeedSensor.hpp"

void TempSensorDiagStrategy::analyze(int reading)  {
    
    
    ACC action;
    std::cout<<"start analyzing"<<'\n';
    
    std::cout<<"generated reading   =   "<<reading<<'\n';

    if(reading >=   WARNING_THRESHOLD   && reading <   CRITICAL_THRESHOLD){
        //Send Request to lower power consumption by slowing down speed
        std::cout<<"lower power consumption by slowing down speed"<<'\n';
        logger::getInstance().log("HIGH TEMPERATURE...WARNING THRESHOLD EXCEEDED...slowing down...   temperature   =   "+std::to_string(reading));
        action.slowdown(SAFE_SPEED);

    }
    else if(reading >=   CRITICAL_THRESHOLD){
        //decrease speed on intervals untill car stops
        /*ACC should do this task, we just call the function decleratespeed()
        but the implementation would be in the ACC class */
        std::cout<<"deacelerate speed untill car stops"<<'\n';
        logger::getInstance().log("HIGH TEMPERATURE...CRITICAL THRESHOLD EXCEEDED...decacelerateing car...   temperature   =   "+std::to_string(reading));
        action.slowdown(CAR_STOPPED);

    }
    else{
        // log safe temperature 
    }
}





