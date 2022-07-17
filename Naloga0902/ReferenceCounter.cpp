//
// Created by Leon on 13. 05. 2022.
//

#include "ReferenceCounter.h"

ReferenceCounter::ReferenceCounter(int count) : count(count) {
}

ReferenceCounter &ReferenceCounter::operator++() {
    ++count;
    return *this;
}

ReferenceCounter ReferenceCounter::operator++(int dummy) {
    return ReferenceCounter(count++);
}

ReferenceCounter &ReferenceCounter::operator--() {
    --count;
    return *this;
}

ReferenceCounter ReferenceCounter::operator--(int dummy) {
    return ReferenceCounter(count--);
}