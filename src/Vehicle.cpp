#include "Vehicle.hpp"
#include "logger.hpp"
#include <string>
#include <iostream>
void    Vehicle::addSensor(std::unique_ptr<Sensor>  sensor){
    sensors.push_back(std::move(sensor));
}
void    Vehicle::StartDiagnoses()    const{
    for(const auto& sensor : sensors){
            sensor->diagnose();
        }
}
void    Vehicle::GenerateReadings()  const{
    for(const auto& sensor : sensors){
            sensor->generate();
            //int reading =   sensor->GetReading_();
            std::cout<<"hello from vehicle.cpp... reading = "<<sensor->GetReading_()<<'\n';
            logger::getInstance().log("vehicle speed = "+std::to_string(sensor->GetReading_()));
        }
}
void    Vehicle::DisplayDashboard()  const{

}