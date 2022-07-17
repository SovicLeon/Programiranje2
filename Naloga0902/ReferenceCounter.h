//
// Created by Leon on 13. 05. 2022.
//

#ifndef NALOGA0901_REFERENCECOUNTER_H
#define NALOGA0901_REFERENCECOUNTER_H


class ReferenceCounter {
private:
    int count;
public:
    ReferenceCounter(int count = 0);
    ReferenceCounter& operator++();
    ReferenceCounter operator++(int dummy);
    ReferenceCounter& operator--();
    ReferenceCounter operator--(int dummy);
    int getCount() const {
        return count;
    }
};


#endif //NALOGA0901_REFERENCECOUNTER_H
