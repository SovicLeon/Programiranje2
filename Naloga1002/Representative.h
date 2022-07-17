//
// Created by Leon on 20. 05. 2022.
//

#ifndef NALOGA1001_REPRESENTATIVE_H
#define NALOGA1001_REPRESENTATIVE_H


#include <string>

class Representative {
protected:
    std::string firstName, lastName;
    unsigned int termFrom, termTo;
public:
    Representative(std::string firstName, std::string lastName, unsigned int termFrom, unsigned int termTo);
    virtual ~Representative() {}
    virtual std::string toString() const;
};


#endif //NALOGA1001_REPRESENTATIVE_H
