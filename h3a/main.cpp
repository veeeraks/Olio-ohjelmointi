#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main() {
    Chef objChef1("Gordon Ramsay");
    objChef1.makeSalad();
    objChef1.makeSoup();
    ItalianChef objItalianChef1("Anthony Bourdain");
    objItalianChef1.makeSalad();
    objItalianChef1.makeSoup();
    objItalianChef1.makePasta();
    cout << "Name of the Italian Chef is " << objItalianChef1.getName() << endl;
    return 0;
}
