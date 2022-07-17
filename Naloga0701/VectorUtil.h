//
// Created by Leon on 21. 04. 2022.
//

#ifndef NALOGA0701_VECTORUTIL_H
#define NALOGA0701_VECTORUTIL_H

#include <vector>
#include <string>
#include <iostream>
#include <random>
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

template < int N, typename T>
std::vector<T> getEveryNthElement (std::vector<T> vec) {
    std::vector<T> returnVec;
    if (N>vec.size()) {
        std::cout << "Size of N too big!\n";
        return returnVec;
    }
    int size = vec.size();
    int remove = N-1;
    for (int i = 0; i < size; i++) {
        if (remove == i) {
            returnVec.push_back(vec[i]);
            remove +=N;
        }
    }
    return returnVec;
}



#endif //NALOGA0701_VECTORUTIL_H
