#include "car.h"
#include "engine.h"
#include <iostream>

using namespace std;

Car::Car() {}

string Car::getModel() const { return model; }

void Car::setModel(const string &newModel) { model = newModel; }

string Car::getBrand() const { return brand; }

void Car::setBrand(const string &newBrand) { brand = newBrand; }

void Car::setEngine() {
    objEngine1.setHorsepower(150);
    objEngine1.setDisplacement(2.0);
}

void Car::setWheels() {
    Wheel *wheels[4] = {&objWheel1, &objWheel2, &objWheel3, &objWheel4};
    for (auto &w : wheels) {
        w->setSize(17);
        w->setType("kesarengas");
    }
}

void Car::printDetails() {
    cout << "Auto: " << getBrand() << " " << getModel() << endl;
    cout << "Moottori: " << objEngine1.getHorsepower() << " hp, "
         << objEngine1.getDisplacement() << " L" << endl;

    Wheel *wheels[4] = {&objWheel1, &objWheel2, &objWheel3, &objWheel4};
    for (int i = 0; i < 4; i++) {
        cout << "Rengas " << (i + 1) << ": " << wheels[i]->getSize() << ", "
             << wheels[i]->getType() << endl;
    }
}
