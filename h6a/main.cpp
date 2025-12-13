#include <QCoreApplication>
#include <iostream>
#include "myclass.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Luodaan Qt:n perussovellusolio, joka tarvitaan event loopia
    // ja signaalia/slotia varten.
    QCoreApplication app(argc, argv);

    MyClass obj;
    obj.raiseMySignal();

    // Käynnistää tapahtumasilmukan = event loopin.
    // Pysyy käynnissä, app.quit() kutsumiseen asti.
    return app.exec();
}
