#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H
#include <string>
#include "Observer.h"
#include "Subject.h"

using namespace std;

class ConcreteObserver : public Observer
{

public:
    ConcreteObserver(string name, Subject *subject) :m_observerName(name), m_subject(subject) {};
    ~ConcreteObserver() {};
    void update();

private:
    string m_observerName;
    Subject *m_subject;
};
#endif