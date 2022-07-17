//
// Created by Dragana on 31. 03. 2022.
//

#include "PrintUtility.h"

void PrintUtility::print(const ColorCode &color, const std::string& str) {
    std::cout << "\033[" << (int)color << "m" << str << "\033[0m";
}

void PrintUtility::print(const ColorCode &color, unsigned int n) {
    for(int i = 0; i < n; i++)
        print(color, "*");
}
