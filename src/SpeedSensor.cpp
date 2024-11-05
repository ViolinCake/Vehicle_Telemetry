#include "SpeedSensor.hpp"

int GetReadings(){
    /*implement the random reading generator function and assign
    the value into the CurrentReading*/

    /*initially put the reading to 50 and generate later*/
    CurrentReading =50;
    return CurrentReading;
}

std::string GetSensorType(){
    return "speed sensor";
}