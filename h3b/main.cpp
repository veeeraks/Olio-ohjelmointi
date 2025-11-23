#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include "animal.h"
#include "dog.h"
#include <iostream>
#include <windows.h>

using namespace std;

void setUTF8() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}

int main() {
    setUTF8();

    Animal objAnimal1;
    objAnimal1.callOut();

    Dog objDog1;
    objDog1.callOut();

    return 0;
}
