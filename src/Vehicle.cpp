#include "Vehicle.hpp"
#include "logger.hpp"
#include <string>

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
            logger::getInstance.log("vehicle speed = "+std::to_string(sensor->GetReading()));
        }
}
void    Vehicle::DisplayDashboard()  const{

}