#pragma once
class SensorReading {
protected:

public:
virtual int ReadingGenerator() =0;
virtual int GetReading() =0;
virtual void SetReading(int value) =0;
virtual ~SensorReading()= default;
};