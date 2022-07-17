#include <iostream>
#include "SmartPointer.h"

int main() {
    SmartPointer<Date> date1(new Date(6, 5, 2020));
    {
        SmartPointer<Date> date2 = date1;
        SmartPointer<Date> date5(new Date(5, 5, 2005));
        std::cout << date1.useCount() << std::endl;
    }
    std::cout << date1.useCount() << std::endl;
    SmartPointer<Date> date3(new Date(1, 1, 2020));
    SmartPointer<Date> date4(new Date(1, 1, 2019));
    date4 = date3 = date3 = date3;
    date3 = date3;
    date3 = date3;
    std::cout << "reference count: " << date3.useCount() << std::endl;


    /*ReferenceCounter * rCount2 = new ReferenceCounter(0);
    std::cout << std::endl << rCount2->getCount();
    ++*rCount2;
    std::cout << std::endl << rCount2->getCount();*/

    return 0;
}