//
// Created by Leon on 16. 03. 2022.
//

#ifndef NALOGA0302_TEXTUTILITY_H
#define NALOGA0302_TEXTUTILITY_H

#include <iostream>
#include <string>

class TextUtility {
private:
    TextUtility() = default;
public:
    static std::string capitalize(const std::string &str);
    static std::string toUpperCase(const std::string &str);
    static std::string toLowerCase(const std::string &str);
    static bool isNumeric(const std::string &str);
    static int contains(const std::string &str, const std::string &substr);
    static std::string substr(const std::string &str, unsigned int start, unsigned int end);
};


#endif //NALOGA0302_TEXTUTILITY_H