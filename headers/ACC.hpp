
#include<SpeedSensorReading.hpp>

class ACC : public SpeedSensorReading {
    private:

    public:
    
    void slowdown(int speedthreshold);
    void hitbreak();
    void batteryalert();
    void tempalert();
};