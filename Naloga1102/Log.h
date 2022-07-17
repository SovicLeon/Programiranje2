//
// Created by Leon on 3. 06. 2022.
//

#ifndef NALOGA1102_LOG_H
#define NALOGA1102_LOG_H


#include <fstream>
#include <chrono>
#include <ctime>
#include <string>


enum class LogType {
    DEBUG, INFO, WARN, ERROR
};

class Log {
private:
    std::ofstream file;
    const std::string fileName = "log.txt";
public:
    Log(LogType type);
    ~Log();
    std::string GetStringLogType(LogType type) const;
    std::string addZeroIfOneChar(std::string inString) const;
    std::string time_in_HH_MM_SS_MMM() const;
    template < typename T >
    Log &operator<<(const T &msg) {
        if (file.is_open()) {
            file << msg;
        }
        return *this;
    };
};


#endif //NALOGA1102_LOG_H
