#include <iostream>
#include "Student.h"

int main() {
    std::string inputFile = "students.csv", outputFile = "students2.csv";
    std::vector<std::shared_ptr<Student>> inVec, myTestVec;
    inVec = Student::LoadFromFile(inputFile);
    for (int i = 0; i < inVec.size(); ++i) {
        std::cout << inVec[i]->toString() << std::endl;
    }
    Student::SaveToFile(inVec,outputFile);

    std::cout << std::endl << std::endl;

    inVec = Student::LoadFromFile(outputFile);
    for (int i = 0; i < inVec.size(); ++i) {
        std::cout << inVec[i]->toString() << std::endl;
    }


    return 0;
}
