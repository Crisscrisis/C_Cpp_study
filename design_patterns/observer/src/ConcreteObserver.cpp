#include <iostream>
#include "../include/ConcreteObserver.h"
using namespace std;

void ConcreteObserver::update()
{
    cout << "update observer[" << m_observerName << "] status:" << m_subject->getStatus() << endl;
}