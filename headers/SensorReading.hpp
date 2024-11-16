#pragma once
class SensorReading {
protected:

public:
//int ReadingGenerator(){};
//virtual int ReadingGenerator() =0;
virtual int GetReading() =0;
virtual ~SensorReading()= default;
};