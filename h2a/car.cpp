#include "car.h"

void Car::setBrand(const string &newBrand) { brand = newBrand; }

void Car::setModel(const string &newModel) { model = newModel; }

void Car::setYearModel(int newYearModel) { yearModel = newYearModel; }

Car::Car() {}

void Car::printData() {
    cout << "- " << brand << ", " << model << ", " << yearModel << endl;
}
