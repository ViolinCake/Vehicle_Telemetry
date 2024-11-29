#pragma once
#include "SensorReading.hpp"
#include <string>

class TempSensorReading : public SensorReading {

private:
int tempreading;
protected:
//void SetReading(int value) override; /*i think i should set the reading here so that when the ACV slows down it will set the speed reading to 50 for example
//                    so that we simulate that when the speed is exceeded, it goes down thorugh the ACC action
//                    SetReading() function is protected so that only inheriting classes like ACC can set the reading value (speed, temp..etc)*/
public:
int ReadingGenerator() override;
int GetReading() override;
void SetReading(int value) override;
const char* GetReadingType() override;
};