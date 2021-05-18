#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <iostream>
#include <fstream>
#include <ctime>

class Logger
{
private:
    std::string FilePath;
public:
    Logger();
    Logger(std::string filePath);
    void writeToLog(std::string message);
};

#endif // LOGGER_H
