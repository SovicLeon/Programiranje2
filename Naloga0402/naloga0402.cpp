#include <iostream>

#include "Conference.h"

void clearVector(const std::vector<Person *> &array) {
    for (Person* i : array) {
        delete i;
    }
}

int main() {
    std::vector<Person*> people;
    people.push_back(new Person("Leon","Sovic"));
    people.push_back(new Person("Jan","Novak"));
    people.push_back(new Person("Aljaz","Kovic"));

    people.push_back(new Person("Tadej","Plovic"));
    people.push_back(new Person("Vsiso","Naic"));
    people.push_back(new Person("Jure","Kure"));

    people.push_back(new Person("Bure","Mure"));
    people.push_back(new Person("Nure","Hurej"));
    people.push_back(new Person("Kaj","Zdaj"));

    Date con1Start(1,1,1971);
    Date con1End(5,1,1971);
    Conference* conference1 = new Conference("First big con",con1Start,con1End);

    Event event1("Starting ceremony","This is for starting the conference.",people[0],con1Start);
    event1.addAttendee(people[1]);
    event1.addAttendee(people[2]);
    event1.addAttendee(people[3]);
    event1.addAttendee(people[4]);

    Date event2Date(3,1,1971);
    Event event2("Main event","This event is the main part of the conference.",people[3],event2Date);
    event2.addAttendee(people[4]);
    event2.addAttendee(people[5]);

    Event event3("Ending ceremony","This is for ending the conference.",people[6],con1End);
    event3.addAttendee(people[1]);
    event3.addAttendee(people[2]);
    event3.addAttendee(people[3]);
    event3.addAttendee(people[4]);
    event3.addAttendee(people[7]);
    event3.addAttendee(people[8]);

    conference1->addEvent(event1);
    conference1->addEvent(event2);
    conference1->addEvent(event3);

    std::cout << "Conference 1 details: " << conference1->toString();


    delete conference1;
    clearVector(people);

    return 0;
}