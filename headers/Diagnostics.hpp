#pragma once
#include<iostream>
#include "Sensor.hpp"

class Diagnostics : public Sensor {
    private:
    std::vector<Sensor> sensors;
    public:
    void addSensor(Sensor& newsensor) const ;
    void processReadings() const;
};