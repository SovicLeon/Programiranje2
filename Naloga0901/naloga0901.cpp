#include <iostream>
#include <memory>
#include "SmartPointer.h"

int main() {
    SmartPointer<Date> date1(new Date(6, 5, 2020));
    {
        SmartPointer<Date> date2 = date1;
        std::cout << date2->toString() << std::endl;
        (*date2)++;
        std::cout << (*date2) << std::endl;
        if (*date2 == *date1) {
            std::cout << "date1 and date2 are the same\n";
        }
    }
    //std::cout << date1->toString() << std::endl;

    std::shared_ptr<Date> d(new Date(7, 7, 2007));
    d->print();


    SmartPointer<int> ptr(new int());
    *ptr = 20;
    std::cout << *ptr << std::endl;

    std::cout << "\n\n";

    SmartPointer<Date> d1(new Date(1, 2, 2022));
    SmartPointer<Date> d2(new Date(2, 2, 2022));
    std::cout << "Is " << (*d1) << " earlier than " << (*d2) << "? " << ((*d1 < *d2) ? "Yes." : "No.") << std::endl;

    std::cout << "\n\n";

    SmartPointer<Date> da1(new Date(1, 1, 1970));
    std::cout << "Date obj: ";
    (*da1).print();
    (*da1)++;
    std::cout << "Date obj after postfix ++: ";
    (*da1).print();
    std::cout << "Date obj print using overridden operator <<: ";
    std::cout << *da1 << std::endl;
    std::cout << "Date obj postfix ++ and print using overridden operator <<: ";
    std::cout << (*da1)++ << std::endl;
    std::cout << "Date obj: ";
    (*da1).print();
    std::cout << "Date obj prefix ++ and print using overridden operator <<: ";
    std::cout << ++(*da1) << std::endl;
    std::cout << "Date obj: ";
    (*da1).print();

    SmartPointer<Date> da2(new Date(31, 1, 1970));
    std::cout << "\nDate obj2 postfix ++ and print using overridden operator <<: ";
    std::cout << (*da2)++ << std::endl;
    std::cout << "Date obj2: ";
    (*da2).print();
    std::cout << "Date obj2 prefix ++ and print using overridden operator <<: ";
    std::cout << ++(*d2) << std::endl;

    SmartPointer<Date> da3(new Date(30, 11, 1970));
    std::cout << "\nDate obj3 postfix ++ and print using overridden operator <<: ";
    std::cout << (*da3)++ << std::endl;
    std::cout << "Date obj3: ";
    (*da3).print();
    std::cout << "Date obj3 prefix ++ and print using overridden operator <<: ";
    std::cout << ++(*da3) << std::endl;

    SmartPointer<Date> da4(new Date(31, 12, 1970));
    std::cout << "\nDate obj4 postfix ++ and print using overridden operator <<: ";
    std::cout << (*da4)++ << std::endl;
    std::cout << "Date obj4: ";
    (*da4).print();
    std::cout << "Date obj4 prefix ++ and print using overridden operator <<: ";
    std::cout << ++(*da4) << std::endl;
    /*std::cout << "\n\nDate friend function demo: \n";
    SmartPointer<Date> date3(new Date(24, 2, 2021));
    std::cout << "Date obj: ";
    date3->print();
    date3++;
    std::cout << "Date obj after postfix ++: ";
    date3->print();
    std::cout << "Date obj print using overridden operator <<: ";
    std::cout << d1 << std::endl;
    std::cout << "Date obj postfix ++ and print using overridden operator <<: ";
    std::cout << d1++ << std::endl;
    std::cout << "Date obj: ";
    d1.print();
    std::cout << "Date obj prefix ++ and print using overridden operator <<: ";
    std::cout << ++d1 << std::endl;
    std::cout << "Date obj: ";
    d1.print();*/

    return 0;
}
