#pragma once
#include <string>
class SensorReading {
protected:

public:
virtual int ReadingGenerator() =0;
virtual int GetReading() =0;
virtual void SetReading(int value) =0;
virtual const char* GetReadingType() =0;
virtual ~SensorReading()= default;
};