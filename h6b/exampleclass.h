#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QObject> // Luoka perii QObject -luokan -> mahdollistaa signaalit, slotit ja Qt:n meta-oliot
#include <QThread> // cppssä käytettävän QThread::msleep() -funktioin käytön -> viiveen teko ilman loopia
#include <QCoreApplication> //Event loop
#include <QDebug> // qDebug()

class ExampleClass : public QObject
{
    Q_OBJECT

public:
    // explicit -> estää tahattomat tyyppimuunnokset
    // parent -> parent-child muistihallinta
    //nullptr -> ei oletusvanhempaa
    explicit ExampleClass(QObject *parent = nullptr);
    void startToWait();

//määriteltävät signaalit, eivät sisällä toteutusta
signals:
    void readyToSay();

// metodit, jotka voidaan liittää signaaleihin, mahdollista kutsua normaalisti funktionakin
public slots:
    void sayHelloSlot();
};

#endif // EXAMPLECLASS_H

