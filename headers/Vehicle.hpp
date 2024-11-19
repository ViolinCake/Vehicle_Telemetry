#include <vector>
#include <memory>
#include "Sensor.hpp"

class   Vehicle {

private:
std::vector<std::unique_ptr<Sensor>> sensors;
public:

void addSensor(std::unique_ptr<Sensor>  sensor);
void    StartDiagnoses()    const;
void    GenerateReadings()  const;
void    DisplayDashboard()  const;

};