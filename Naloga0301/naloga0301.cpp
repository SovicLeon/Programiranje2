#include "Time.h"

int main() {
    Time *firstHour = new Time(14,16,9);

    std::cout << std::endl << firstHour->toString() << std::endl << firstHour->toString12HourFormat() << std::endl;

    std::string testString = "00:05:59";

    Time *secondHour = new Time(Time::parse(testString));

    std::cout << std::endl << secondHour->getHour() << ":" << secondHour->getMinute() << ":" << secondHour->getSecond();

    std::cout << std::endl << secondHour->toString() << std::endl << secondHour->toString12HourFormat() << std::endl;

    Time thirdHour(23,59,59);

    std::cout << std::endl << thirdHour.toString() << std::endl << thirdHour.toString12HourFormat() << std::endl;

    Time *fourthHour = new Time(24,59,59);

    std::cout << std::endl << fourthHour->toString() << std::endl << fourthHour->toString12HourFormat() << std::endl;

    Time *fifthHour = new Time(0,60,0);

    std::cout << std::endl << fifthHour->toString() << std::endl << fifthHour->toString12HourFormat() << std::endl;

    Time *sixthHour = new Time(13,3,0);

    std::cout << std::endl << sixthHour->toString() << std::endl << sixthHour->toString12HourFormat() << std::endl;

    Time *seventhHour = new Time(13,3,6);

    std::cout << std::endl << seventhHour->toString() << std::endl << seventhHour->toString12HourFormat() << std::endl;

    std::cout << std::endl << Time::isLater(firstHour,secondHour) << std::endl;
    std::cout << std::endl << Time::isLater(secondHour,firstHour) << std::endl;
    std::cout << std::endl << Time::isLater(fourthHour,fifthHour) << std::endl;
    std::cout << std::endl << Time::isLater(fifthHour,fourthHour) << std::endl;
    std::cout << std::endl << Time::isLater(sixthHour,seventhHour) << std::endl;
    std::cout << std::endl << Time::isLater(seventhHour,sixthHour) << std::endl;

    testString = "25:03:01";

    Time *eightHour = new Time(Time::parse(testString));

    std::cout << std::endl << eightHour->getHour() << ":" << eightHour->getMinute() << ":" << eightHour->getSecond();

    std::cout << std::endl << eightHour->toString() << std::endl << eightHour->toString12HourFormat() << std::endl;

    std::cout << std::endl << Time::isTimeValid(16,67,91) << std::endl;

    delete firstHour;
    delete secondHour;
    delete fourthHour;
    delete fifthHour;
    delete sixthHour;
    delete seventhHour;
    delete eightHour;

    return 0;
 }