
#include<SpeedSensorReading.hpp>

class ACC : public SpeedSensorReading {
    private:

    public:
    
    void slowdown();
    void hitbreak();
    void batteryalert();
    void tempalert();
};