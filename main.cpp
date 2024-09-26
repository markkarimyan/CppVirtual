#include <iostream>
#include "car.hpp"

int main() {
    Car* first_car = new Koenigsegg();
    Car* second_car = new McLaren();

    std::cout << "First Car: " << first_car->getCarModel() << ", BHP: " << first_car->getBhp() << std::endl;
    std::cout << "Second Car: " << second_car->getCarModel() << ", BHP: " << second_car->getBhp() << std::endl;

    delete first_car;
    delete second_car;

    return 0;
}
