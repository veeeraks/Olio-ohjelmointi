#include "classa1.h"
#include "classa2.h"
#include "classb.h"
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    // Osoitinmuuttuja (pointteri)
    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    // Referenssi
    int& refA = a;
    cout << "refA osoittama osoite on: " << &refA << endl;
    cout << "refA osoittaman muistipaikan arvo on: " << refA << endl;

    int b = 6;

    // refA:ta ei saa osoittamaan b:n osoitteeseen, koska referenssi on sidottu luontihetkellä.
    // pointerA:n saa osoittamaan b:n osoitteeseen, koska pointterit ovat uudelleenosoitettavia.
    // pointerA = &b;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;

    // Kun A1 saa b:n kopiona, A1:n muutos ei vaikuta alkuperäiseen b:hen.
    // Kun A2 saa b:n referenssina, A2:n muutos vaikuttaa suoraan b:hen.

    return 0;
}
