#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"

#include <iostream>
#include <memory>

using namespace std;

class Car {
private:
    Engine objEngine1;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    /*unique_ptr<Engine> objEngine1;
  unique_ptr<Wheel> objWheel1;
  unique_ptr<Wheel> objWheel2;
  unique_ptr<Wheel> objWheel3;
  unique_ptr<Wheel> objWheel4;*/

    string model;
    string brand;

public:
    Car();
    Car(string, string);
    void setEngine();
    void setWheels();
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
    void printDetails();
};

#endif // CAR_H
