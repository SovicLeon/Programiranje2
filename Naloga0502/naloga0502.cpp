#include <iostream>

#include "SmartHome.h"
#include "Lock.h"
#include "Light.h"
#include "AirConditioner.h"

int main() {
    /*Lock *lock1 = new Lock("100", "Entrance lock", 1);
    Lock *lock2 = new Lock("101", "Bedroom lock", 0);
    Lock *lock3 = new Lock("102", "Bathroom lock", 0);

    Light *light1 = new Light("200", "Outdoor light", 0);
    Light *light2 = new Light("201", "Kitchen light", 1);
    Light *light3 = new Light("202", "Doorway light", 1);

    AirConditioner *ac1 = new AirConditioner("300", "Living room AC", 20);
    AirConditioner *ac2 = new AirConditioner("300", "Bedroom AC", 23);*/


    SmartHome hisa1("Dvonadstropna hisa");
    /*hisa1.addDevice(new Lock("100", "Entrance lock", 1));
    hisa1.addDevice(new Lock("101", "Bedroom lock", 0));
    hisa1.addDevice(new Lock("102", "Bathroom lock", 0));

    hisa1.addDevice(new Light("200", "Outdoor light", 0));
    hisa1.addDevice(new Light("201", "Kitchen light", 1));
    hisa1.addDevice(new Light("202", "Doorway light", 1));

    hisa1.addDevice(new AirConditioner("300", "Living room AC", 20));
    hisa1.addDevice(new AirConditioner("301", "Bedroom AC", 23));

    /*hisa1.addDevice(lock1);
    hisa1.addDevice(lock2);
    hisa1.addDevice(lock3);

    hisa1.addDevice(light1);
    hisa1.addDevice(light2);
    hisa1.addDevice(light3);

    hisa1.addDevice(ac1);
    hisa1.addDevice(ac2);*/

    //std::cout << hisa1.toString();

    std::cout << std::endl;

    std::cout << Device::createRandomDevice()->toString() << std::endl;
    std::cout << Device::createRandomDevice()->toString() << std::endl;
    std::cout << Device::createRandomDevice()->toString() << std::endl;

    std::cout << std::endl;

    for (int i = 0; i < 10; ++i) {
        hisa1.addDevice(Device::createRandomDevice());
    }

    std::cout << hisa1.toString();

    return 0;
}
