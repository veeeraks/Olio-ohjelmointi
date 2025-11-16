#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <bits/unique_ptr.h>

using namespace std;

int main() {
    Car objCar1;
    objCar1.setBrand("Toyota");
    objCar1.setModel("Corolla");
    objCar1.setYearModel(2001);
    objCar1.printData();

    Rectangle *objRectangle1 = new Rectangle;
    objRectangle1->setWidth(3.88);
    objRectangle1->setHeight(7.64);
    cout << "Rectangles area is " << objRectangle1->getArea()
         << " & circumstance " << objRectangle1->getCircum() << endl;
    delete objRectangle1;
    objRectangle1 = nullptr;

    unique_ptr<Student> objStudent1 =
        make_unique<Student>("Student Sam", 487, 9.4);
    cout << "- " << objStudent1->getStudentNumber() << ", "
         << objStudent1->getName() << ", " << objStudent1->getAverage() << endl;
    return 0;
}
