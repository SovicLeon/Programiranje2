#include <iostream>
#include "Student.h"

int main() {
    Log(LogType::DEBUG) << "Program start." << "\n";
    std::string inputFile = "students.csv", outputFile = "students2.csv", inputFile2 = "doesNotExist.csv";
    std::vector<std::shared_ptr<Student>> inVec, myTestVec;
    inVec = Student::LoadFromFile(inputFile);
    Log(LogType::DEBUG) << "LoadFromFile 1 finished." << "\n";
    for (int i = 0; i < inVec.size(); ++i) {
        std::cout << inVec[i]->toString() << std::endl;
    }
    Student::SaveToFile(inVec,outputFile);

    Log(LogType::DEBUG) << "SaveToFile 1 finished." << "\n";

    std::cout << std::endl << std::endl;

    inVec = Student::LoadFromFile(outputFile);
    Log(LogType::DEBUG) << "LoadFromFile 2 finished." << "\n";
    for (int i = 0; i < inVec.size(); ++i) {
        std::cout << inVec[i]->toString() << std::endl;
    }

    inVec = Student::LoadFromFile(inputFile2);
    Log(LogType::DEBUG) << "LoadFromFile 3 finished." << "\n";

    Log(LogType::INFO) << "This is additional message. We can also put multiple << and other types, not just strings e.g. " << 5 << "\n" ;


    return 0;
}
