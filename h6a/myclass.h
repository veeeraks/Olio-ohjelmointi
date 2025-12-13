#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <iostream>
#include <QDebug>
using namespace  std;

// Luokka perii QObjectin, joka mahdollistaa signal/slot-mekanismin.
// Luokkaan lisätty Q_OBJECT-makro vaatii AUTOMOC:n CMakeLists.txt:ssa.
class MyClass : public QObject {
    Q_OBJECT

public:
    MyClass(QObject* parent = nullptr);
    // parent-parametri mahdollistaa parent-child -omistussuhten
    // jos parent annetaan, olio vapautuu automaattisesti

    void raiseMySignal();
    //metodi mySignal signaalin nostamisesksi(emittoimiseksi)


signals:
    void mySignal();
    // emit mySignal(); emittoimiseen
    // ei toteutusta, vain määrittely

public slots:
    void mySlot();
    // vastaanottava funktio, joka kutsutaan automaattisesti, kun
    // mySignal kytkeytyy siihen
};

#endif // MYCLASS_H
