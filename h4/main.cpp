#include "car.h"
#include <iostream>

using namespace std;

int main() {
    Car objCar1;
    objCar1.setBrand("Toyota");
    objCar1.setModel("Corolla");
    objCar1.setEngine();
    objCar1.setWheels();
    objCar1.printDetails();

    return 0;
}
