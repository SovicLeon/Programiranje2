//
// Created by Leon on 26. 05. 2022.
//

#ifndef NALOGA1101_STUDENT_H
#define NALOGA1101_STUDENT_H


#include "Date.h"
#include "Address.h"
#include "Log.h"
#include <vector>
#include <memory>
#include <fstream>
#include <iostream>

class Student {
private:
    unsigned int id;
    std::string name, surname;
    Date dateOfBirth;
    Address address;
public:
    Student(unsigned int id, std::string name, std::string surname, Date dateOfBirth, Address address);
    std::string toString() const;
    static std::vector<std::shared_ptr<Student>> LoadFromFile(const std::string &filename);
    static void SaveToFile(const std::vector<std::shared_ptr<Student>> &students, const std::string &fileName);
};


#endif //NALOGA1101_STUDENT_H
