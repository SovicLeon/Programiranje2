//
// Created by Leon on 12. 05. 2022.
//

#ifndef NALOGA0901_SMARTPOINTER_H
#define NALOGA0901_SMARTPOINTER_H


#include "Date.h"

template <typename T>
class SmartPointer {
private:
    T* pData;
public:
    // ...

    SmartPointer(T* pData = nullptr) { this->pData = pData; }

    ~SmartPointer() {
        delete pData;
    }

    T& operator*() {
        return *pData;
    }

    T* operator->() {
        return pData;
    }
};


#endif //NALOGA0901_SMARTPOINTER_H
