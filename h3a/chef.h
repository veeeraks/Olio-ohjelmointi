#ifndef CHEF_H
#define CHEF_H

#include <iostream>

using namespace std;

class Chef {
protected:
    string name;

public:
    Chef(string); // konstruktori
    ~Chef();      // destruktori
    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
