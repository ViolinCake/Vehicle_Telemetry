#pragma once
#include "Sensor.hpp"

class SpeedSensor : public Sensor {
    protected:

    public:
    int GetReadings() const override;
    std::string GetSensorType() const override;

    
};