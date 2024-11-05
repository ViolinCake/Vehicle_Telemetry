#include "SpeedSensorDiagStrategy"
#include "SpeedSensor.hpp"

void analyze(){
    int speed;
    speed=GetReadings();

    if(speed>120){
        //Send Request to the ECU to slow down
        std::cout<<"send request to the ECU to slow down"<<'\n';
    }
}



