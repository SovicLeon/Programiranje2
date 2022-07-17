//
// Created by Leon on 26. 05. 2022.
//

#include "Student.h"

Student::Student(unsigned int id, std::string name, std::string surname, Date dateOfBirth, Address address) : id(id), name(name), surname(surname),
                                                                                                              dateOfBirth(dateOfBirth),
                                                                                                              address(address) {
}

std::string Student::toString() const {
    return std::to_string(id) + "," + name + "," + surname + "," + dateOfBirth.toString() + "," + address.toString();
}

std::vector<std::shared_ptr<Student>> Student::LoadFromFile(const std::string &filename) {
    std::vector<std::shared_ptr<Student>> retVec;
    std::string line[7];
    std::ifstream myfile(filename);
    int format = 0;
    if (myfile.is_open()) {
        while (getline(myfile, line[format], ',')) {
            format++;
            if (format == 6) {
                myfile >> line[format];
                try {
                    retVec.push_back(std::make_shared<Student>(stoi(line[0]),line[1],line[2],Date(Date::GetDateFromString(line[3])),Address(Address::checkValidStreet(line[4]),line[5],line[6])));
                } catch (UnparseableDateException& e1) {
                    std::cout << e1.what() << std::endl;
                } catch (InvalidAddressException& e2) {
                    std::cout << e2.what() << std::endl;
                }
                format = 0;
            }
        }
    }
    myfile.close();
    return retVec;
}

void Student::SaveToFile(const std::vector<std::shared_ptr<Student>> &students, const std::string &fileName) {
    std::ofstream myfile(fileName);
    if (myfile.is_open()) {
        for (int i = 0; i < students.size(); ++i) {
            {
                myfile << students[i]->toString() << "\n";
            }
        }
        myfile.close();
    }
}
