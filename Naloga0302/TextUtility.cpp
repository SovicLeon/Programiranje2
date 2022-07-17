//
// Created by Leon on 16. 03. 2022.
//

#include "TextUtility.h"

std::string TextUtility::capitalize(const std::string &str) {
    std::string newString = str;
    bool firstChar = true;
    for (unsigned int i = 0; i < newString.size(); ++i) {
        if (newString[i] <= 90 && newString[i] >= 65 && firstChar) {
            firstChar = false;
        } else if (newString[i] != 32 && newString[i] <= 122 && newString[i] >= 97 && firstChar) {
            newString[i] -= 32;
            firstChar = false;
        } else if (i != newString.size() - 1 && (newString[i] == 33 || newString[i] == 46 || newString[i] == 63)) {
            if (newString[i + 1] == 32) {
                firstChar = true;
            }
        }
    }
    return newString;
}

std::string TextUtility::toUpperCase(const std::string &str) {
    std::string newString = str;
    for (unsigned int i = 0; i < newString.size(); ++i) {
        if (newString[i] <= 122 && newString[i] >= 97) {
            newString[i] -= 32;
        }
    }
    return newString;
}

std::string TextUtility::toLowerCase(const std::string &str) {
    std::string newString = str;
    for (unsigned int i = 0; i < newString.size(); ++i) {
        if (newString[i] <= 90 && newString[i] >= 65) {
            newString[i] += 32;
        }
    }
    return newString;
}

bool TextUtility::isNumeric(const std::string &str) {
    if (str.empty()) {
        return false;
    }
    for (unsigned int i = 0; i < str.size(); ++i) {
        if (str[i] < 48 || str[i] > 57) {
            return false;
        }
    }
    return true;
}

int TextUtility::contains(const std::string &str, const std::string &substr) {
    if (str.size() < substr.size()) {
        return -1;
    }
    for (unsigned int i = 0; i < str.size(); ++i) {
        if (str[i] == substr[0]) {
            for (unsigned int j = 0; j < substr.size(); ++j) {
                if (str[i + j] != substr[j]) {
                    break;
                } else if (str[i + j] == substr[substr.size() - 1] && j == substr.size() - 1) {
                    return i;
                }
            }
        }
    }
    return -1;
}

std::string TextUtility::substr(const std::string &str, unsigned int start, unsigned int end) {
    std::string newString;
    for (unsigned int i = start; i < str.size(); ++i) {
        if (i >= start && i <= end) {
            newString += str[i];
        }
    }
    return newString;
}
