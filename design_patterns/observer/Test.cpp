#include <iostream>
#include "../include/Subject.h"
#include "../include/Observer.h"
#include "../include/ConcreteObserver.h"
#include "../include/ConcreteSubject.h"

int main(int argc, char *argv[])
{
    Subject * subjectA = new ConcreteSubject("subjectA");
    Subject * subjectB = new ConcreteSubject("subjectB");

    Observer * observerA = new ConcreteObserver("observerA", subjectA);
    Observer * observerB = new ConcreteObserver("observerB", subjectB);

    subjectA->addObserver(observerA);
    subjectB->addObserver(observerB);

    subjectA->setStatus(1);
    subjectA->notifyObservers();

    subjectB->setStatus(2);
    subjectB->notifyObservers();

    cout << "--------------------" << endl;

    subjectA->addObserver(observerB);
    subjectA->setStatus(2);
    subjectA->notifyObservers();

    delete subjectA;
    delete subjectB;
    delete observerA;
    delete observerB;

    system("pause");

    return 0;
}