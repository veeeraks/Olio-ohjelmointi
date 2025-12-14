#include "exampleclass.h"

ExampleClass::ExampleClass(QObject *parent)
    : QObject(parent) // QObjectin muodostimen kutsu
{
    qDebug() << "Start"; // Tulostus ennen signaali/slotti-yhdistämistä

    connect(this, &ExampleClass::readyToSay,
            this, &ExampleClass::sayHelloSlot);

    qDebug() << "End"; // Tulostus yhdistämisen jälkeen
}

void ExampleClass::startToWait()
{
    QThread::msleep(1000); // Viive
    emit readyToSay(); // Signaalin lähetys
}

void ExampleClass::sayHelloSlot()
{
    qDebug() << "Terve"; // Slotin toteutus ja tulostus
}
