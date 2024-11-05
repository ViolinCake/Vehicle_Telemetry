#pragma once
#include <iostream>
#include "Sensor.hpp"

class Diagnostics : public Sensor {
    private:
    std::vector<*Sensor> sensors;
    public:
    void addSensor(Sensor& newsensor,sensors) {
        sensors.push_back(&newsensor);
    }
    void StartDiagnoses() const{
        for(Sensor& sensor : sensors){
        sensor.diagonse();
    }
    }
};