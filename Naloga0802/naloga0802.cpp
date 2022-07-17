#include <iostream>
#include "LinkedList.h"
#include "Antenna.h"

int main() {
    LinkedList<int> list;

    std::cout << "List " << (list.isEmpty() ? "IS" : "IS NOT") << " empty." << std::endl << std::endl;

    list.add(1);
    list.add(4);
    list.add(10);
    list.add(15);
    list.add(20);

    std::cout << "List " << (list.isEmpty() ? "IS" : "IS NOT") << " empty." << std::endl << std::endl;

    std::cout << "List (size " << list.getSize() << "): " << std::endl;
    for(int i=0; i<list.getSize(); i++)
        std::cout << list.at(i) << std::endl;

    list.reverse();
    std::cout << "\nList (size " << list.getSize() << "): " << std::endl;
    for(int i=0; i<list.getSize(); i++)
        std::cout << list.at(i) << std::endl;

    LinkedList<std::string> list2;

    std::cout << "\n\nList2 " << (list2.isEmpty() ? "IS" : "IS NOT") << " empty." << std::endl << std::endl;

    list2.add("a");
    list2.add("b");
    list2.add("c");


    std::cout << "List2 " << (list2.isEmpty() ? "IS" : "IS NOT") << " empty." << std::endl << std::endl;

    std::cout << "List2 (size " << list2.getSize() << "): " << std::endl;
    for(int i=0; i<list2.getSize(); i++)
        std::cout << list2.at(i) << std::endl;

    list2.reverse();
    std::cout << "\nList2 (size " << list2.getSize() << "): " << std::endl;
    for(int i=0; i<list2.getSize(); i++)
        std::cout << list2.at(i) << std::endl;

    LinkedList<Antenna> list3;

    std::cout << "\n\nlist3 " << (list3.isEmpty() ? "IS" : "IS NOT") << " empty." << std::endl << std::endl;

    list3.add(Antenna(10.0,"first"));
    list3.add(Antenna(20.0,"second"));
    list3.add(Antenna(30.0,"third"));


    std::cout << "list3 " << (list3.isEmpty() ? "IS" : "IS NOT") << " empty." << std::endl << std::endl;

    std::cout << "List (size " << list3.getSize() << "): " << std::endl;
    for(int i=0; i<list3.getSize(); i++)
        std::cout << list3.at(i).toString() << std::endl;

    list3.reverse();
    std::cout << "\nList (size " << list3.getSize() << "): " << std::endl;
    for(int i=0; i<list3.getSize(); i++)
        std::cout << list3.at(i).toString() << std::endl;

    return 0;
}
