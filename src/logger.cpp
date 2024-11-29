#include "logger.hpp"
#include <fstream>
#include <ios>
#include <iostream>
#include <memory>

std::unique_ptr<logger> logger::instance =   nullptr;
logger::logger()    :   logFile("vehiclelog.txt",std::ios::app){
    if(!logFile.is_open()){
        std::cerr<<"failed to open log file"<<'\n';
    }
}
logger& logger::getInstance(){
    if(!instance){
        /*instance  =   std::make_unqiue<logger>();
            rhis approach wouldn't work as the make_unqiue tries to access the
            constructor of the class which private, Hence produces an error
            instead we use the 'new' keyword*/
        instance    =   std::unique_ptr<logger>(new logger());
        
    }
    return *instance;

}
void logger::log(const std::string&   message){
    
    if(logFile.is_open()){
        logFile <<  message <<'\n';
    }
    
}

logger::~logger(){
    if(logFile.is_open()){
        logFile.close();
    }
}