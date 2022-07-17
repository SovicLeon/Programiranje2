//
// Created by Leon on 3. 06. 2022.
//

#include "Log.h"

Log::Log(LogType type) {
    file.open(fileName, std::ios_base::app);
    if (file.is_open()) {
        file << time_in_HH_MM_SS_MMM() << " " << GetStringLogType(type) << " ";
    }
}

Log::~Log() {
    file.close();
}

std::string Log::GetStringLogType(LogType type) const {
    switch (type) {
        case LogType::DEBUG:
            return "[DEBUG]";
            break;
        case LogType::INFO:
            return "[INFO]";
            break;
        case LogType::WARN:
            return "[WARN]";
            break;
        case LogType::ERROR:
            return "[ERROR]";
            break;
        default:
            return "[NOSUCHLOGTYPE]";
    }
}

std::string Log::addZeroIfOneChar(std::string inString) const {
    if (inString.size() == 1) {
        return "0" + inString;
    }
    return inString;
}

std::string Log::time_in_HH_MM_SS_MMM() const {
    using namespace std::chrono;

    system_clock::time_point now = system_clock::now();
    time_t tt = system_clock::to_time_t(now);
    tm local_tm = *localtime(&tt);

    milliseconds ms = duration_cast< milliseconds >(system_clock::now().time_since_epoch());

    std::string HH, MM, SS, mmm, YYYY, MO, DD;
    YYYY = std::to_string(local_tm.tm_year + 1900);
    MO = addZeroIfOneChar(std::to_string(local_tm.tm_mon + 1));
    DD = addZeroIfOneChar(std::to_string(local_tm.tm_mday));
    HH = addZeroIfOneChar(std::to_string(((((ms.count() / 1000) / 60) / 60) % 24 ) + 2));
    MM = addZeroIfOneChar(std::to_string(((ms.count() / 1000) / 60) % 60));
    SS = addZeroIfOneChar(std::to_string((ms.count() / 1000) % 60));
    mmm = addZeroIfOneChar(std::to_string(ms.count() % 1000));

    return YYYY + "-" + MO + "-" + DD + " " + HH + ":" + MM + ":" + SS + "." + mmm;
}