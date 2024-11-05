#pragma once
class Sensor {
    protected:
    int CurrentReading;
    int MaxReading;
    int MinReading;
    public:
    virtual int GetReadings() const =0;
    virtual std::string GetSensorType() const =0;
    
};