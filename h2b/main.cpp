#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<Car> carList;

    carList.emplace_back("Toyota", "Corolla", 2001);
    carList.emplace_back("Ford", "Focus", 2016);
    carList.emplace_back("Volkswagen", "Vento", 1996);

    carList[1].printData();

    for (Car car : carList) {
        car.printData();
    }

    return 0;
}
