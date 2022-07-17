//
// Created by Leon on 12. 05. 2022.
//

#ifndef NALOGA0901_SMARTPOINTER_H
#define NALOGA0901_SMARTPOINTER_H


#include "Date.h"
#include "ReferenceCounter.h"

template <typename T>
class SmartPointer {
private:
    T* pData;
    ReferenceCounter* rCount;
public:
    // ...

    SmartPointer(T* pData = nullptr) { this->pData = pData; rCount = new ReferenceCounter(0); }

    SmartPointer(SmartPointer<T> &oldObject) {
        pData = oldObject.getPData();
        rCount = oldObject.getRCountIncrement();
    }

    int useCount() const {
        return rCount->getCount();
    }

    ~SmartPointer() {
        if (rCount->getCount() == 0) {
            delete pData;
            delete rCount;
        } else {
            --*rCount;
        }
    }

    T* getPData() const {
        return pData;
    }

    ReferenceCounter* getRCountIncrement() {
        ++*rCount;
        return rCount;
    }

    T& operator*() {
        return *pData;
    }

    T* operator->() {
        return pData;
    }

    SmartPointer<T>& operator=(SmartPointer<T>& other) {
        if (this != &other) {
            --*rCount;
            if (rCount->getCount() < 0) {
                delete pData;
                delete rCount;
            }
            pData = other.getPData();
            rCount = other.getRCountIncrement();
            return *this;
        } else {
            return *this;
        }
    }
};


#endif //NALOGA0901_SMARTPOINTER_H
