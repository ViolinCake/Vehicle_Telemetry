#include<iostream>
#include <memory>
#include <utility>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Sensor.hpp"
#include "SpeedSensorReading.hpp"
#include "SpeedSensorDiagStrategy.hpp"
#include "Vehicle.hpp"

int main(){

    // std::vector<Sensor*> sensors;
    // addSensor(&SpeedSensor,sensors);

    
    // sensors.push_back(&SpeedSensor);
    /*for later development*/
    //sensors.push_back(&TempSensor);
    srand(time(0));

    

    //Sensor speedsensor(std::make_unique<SpeedSensorDiagStrategy>(),std::make_unique<SpeedSensorReading>());
    auto speedsensor    =   std::make_unique<Sensor>(
        std::make_unique<SpeedSensorDiagStrategy>(),
        std::make_unique<SpeedSensorReading>()
        );
    auto speedsensor2    =   std::make_unique<Sensor>(
    std::make_unique<SpeedSensorDiagStrategy>(),
    std::make_unique<SpeedSensorReading>()
    );

    Vehicle mycar;
    mycar.addSensor(std::move(speedsensor));
    mycar.addSensor(std::move(speedsensor2));
    mycar.GenerateReadings();
    mycar.StartDiagnoses();


                    /*      this works successfully     */
    // // // std::vector<std::unique_ptr<Sensor>> sensors;
    // // // //speedsensor->diagnose();
    // // // sensors.push_back(std::move(speedsensor));
    // // // sensors.push_back(std::move(speedsensor2));
    
    // // // //generate all readings
    // // // for(const auto& sensor : sensors){
    // // //         sensor->generate();
    // // //     }
    // // // //diagnose all readings
    // // // for(const auto& sensor : sensors){
    // // //         sensor->diagnose();
    // // //     }
    /***************************************************************************************/
    /***************************************************************************************/
    /***************************************************************************************/
    /***************************************************************************************/
    // Vehicle mycar;
    // mycar.addSensor(std::move(speedsensor));
    // mycar.GenerateReadings();
    // mycar.DisplayDashboard();
    // mycar.StartDiagnoses();       
    // Sensor speedsensor(std::make_unique<SpeedSensorDiagStrategy>(),std::make_unique<SpeedSensorReading>());
    // speedsensor.diagnose(); /*this will be a delegate by the Sensor class 
    //                         but implemented in the DiagStrategy interface*/
    
    // for(Sensor* sensor : sensors){
    //     std::cout<<"sensor type is "<<sensor->GetsensorType()<<'\n';
    // }
    return 0;
}
/*
sensors.push_back()
for(Sensor* sensor : sensors){
        sensor->StartDiagnose();
    }


*/