#include<iostream>
#include <memory>
#include <utility>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Sensor.hpp"
#include "SpeedSensorReading.hpp"
#include "SpeedSensorDiagStrategy.hpp"
#include "TempSensorDiagStrategy.hpp"
#include "TempSensorReading.hpp"
#include "Vehicle.hpp"
#include "logger.hpp"
int main(){

    // std::vector<Sensor*> sensors;
    // addSensor(&SpeedSensor,sensors);

    
    // sensors.push_back(&SpeedSensor);
    /*for later development*/
    //sensors.push_back(&TempSensor);
    srand(time(0));

    logger::getInstance().log("hello from main.cpp");

    //Sensor speedsensor(std::make_unique<SpeedSensorDiagStrategy>(),std::make_unique<SpeedSensorReading>());
    auto speedsensor    =   std::make_unique<Sensor>(
        std::make_unique<SpeedSensorDiagStrategy>(),
        std::make_unique<SpeedSensorReading>()
        );
    // auto tempsensor    =   std::make_unique<Sensor>(
    //     std::make_unique<TempSensorDiagStrategy>(),
    //     std::make_unique<TempSensorReading>()
    //     );

    Vehicle mycar;
    std::cout<<"moved pointer in main.cpp"<<'\n';
    mycar.addSensor(std::move(speedsensor));
    //mycar.addSensor(std::move(tempsensor));
    //while(true){
        mycar.GenerateReadings();
        std::cout<<"test test"<<'\n';
        mycar.GenerateReadings();
        mycar.StartDiagnoses();             /*the problem is here for undefined behaviors
                                            of the unique pointers*/
        system("sleep 2");
    //}
    std::cout<<"test test test"<<'\n';
    
    mycar.GenerateReadings();


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
