//
// Created by Leon on 21. 04. 2022.
//

#ifndef NALOGA0701_VECTORUTIL_H
#define NALOGA0701_VECTORUTIL_H

#include <vector>
#include <string>
#include <iostream>
#include <random>
#include "PrintUtility.h"
#include "Material.h"

template < int N, typename T>
void fillDefault (std::vector<T> &vec) {
    for (int i=0; i < N; i++) {
        T newEle;
        vec.push_back(newEle);
    }
}

template <int N>
void fillDefault (std::vector<Material> &vec) {
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist1(1, 1000);
    int randomNumber;
    for (int i=0; i < N; i++) {
        randomNumber = uniform_dist1(e1);
        Material newEle("Material" + std::to_string(randomNumber), randomNumber, randomNumber % 10);
        vec.push_back(newEle);
    }
}

template <typename T>
std::string toString (std::vector<T> vec) {
    std::string returnString;
    for (int i=0; i < vec.size(); i++)
        returnString += vec[i].toString() + "\n";
    return returnString;
}

template <typename T>
void print (std::vector<T> vec) {
    std::cout << toString(vec);
}

template <typename T>
std::vector<T> reverse (std::vector<T> vec) {
    std::vector<T> returnVector;
    for (int i=vec.size()-1; i >= 0; i--)
        returnVector.push_back(vec[i]);
    return returnVector;
}

template < ColorCode color = ColorCode::Green, typename T>
void printColor (std::vector<T> vec) {
    PrintUtility::print(color, toString(vec));
}

template < typename T>
std::vector<std::vector<T>> slice (std::vector<T> vec, int n) {
    std::vector<std::vector<T>> newVec;
    std::vector<T> vecAdd;
    for (int i = 0; i < n; ++i) {
        vecAdd.clear();
        for (int j = 0; j < n; ++j) {
            T newEle;
            vecAdd.push_back(newEle);
        }
        newVec.push_back(vecAdd);
    }
    return newVec;
}

template < typename T>
std::string toSafeString (std::vector<T> vec, std::vector<std::string> forbidden) {
    std::string returnString = toString(vec);
    for (int i = 0; i < returnString.size(); ++i) {
        for (int j = 0; j < forbidden.size(); ++j) {
            if (returnString[i]==forbidden[j][0]) {
                for (int k = 0; k < forbidden[j].size(); ++k) {
                    if (forbidden[j][k] != returnString[i+k]) {
                        break;
                    }
                    if (k == forbidden[j].size()-1) {
                        for (int l = 0; l < forbidden[j].size(); ++l) {
                            returnString[i+l] = '*';
                        }    
                    }
                }
            }
        }
    }
    return returnString;
}

template < ColorCode color = ColorCode::Red, typename T>
void highlightVowels (std::vector<T> vec) {
    std::string vecString = toString(vec), currStr;
    for (int i = 0; i < vecString.size(); ++i) {
        currStr = vecString[i];
        if (vecString[i] == 'a' || vecString[i] == 'e' || vecString[i] == 'i' || vecString[i] == 'o' || vecString[i] == 'u') {
            PrintUtility::print(color,currStr);
        } else if (vecString[i] == 'A' || vecString[i] == 'E' || vecString[i] == 'I' || vecString[i] == 'O' || vecString[i] == 'U') {
            PrintUtility::print(color,currStr);
        } else {
            PrintUtility::print(ColorCode::Default,currStr);
        }
    }
    //PrintUtility::print(color,vecString);
}

template < typename T>
std::string toReverseString (std::vector<T> vec) {
    std::string returnString, vecString = toString(vec);
    for (int i = vecString.size(); i >= 0; --i) {
        returnString += vecString[i];
    }
    return returnString;
}

template < typename T>
unsigned int countItems (std::vector<T> vec, T e) {
    unsigned int counter = 0;
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i].toString() == e.toString()) {
            counter++;
        }
    }
    return counter;
}


#endif //NALOGA0701_VECTORUTIL_H
