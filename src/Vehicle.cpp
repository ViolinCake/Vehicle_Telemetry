#include "Vehicle.hpp"


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
        }
}
void    Vehicle::DisplayDashboard()  const{

}