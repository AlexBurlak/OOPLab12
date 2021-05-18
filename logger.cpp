#include "logger.h"

Logger::Logger()
    :FilePath("Default.log")
{}

Logger::Logger(std::string filePath)
    :FilePath(filePath)
{}

void Logger::writeToLog(std::string message)
{
    using namespace std;
    ofstream logFile(FilePath, ios::out|ios::app);
    if(logFile.is_open())
    {
        time_t currentTime = time(nullptr);
        struct tm *localTime = localtime(&currentTime);
        logFile << to_string(localTime->tm_hour) << ":" << localTime->tm_min << ":" << localTime->tm_sec << " - ";
        logFile << message << "\n";
        logFile.flush();
    }
    logFile.close();
}
