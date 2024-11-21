#pragma once
#include <iostream>
#include <fstream>
#include <memory>
#include <string>

class logger {

private:
static std::unique_ptr<logger> instance;
std::ofstream logFile;
logger();



public:

static logger& getInstance(); 
void log(const std::string& message);

logger(const logger&)=delete;
logger& operator=(const logger&)=delete;
~logger();
};