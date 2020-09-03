#ifndef SUBJECT_H
#define SUBJECT_H
#include <vector>
#include "Observer.h"

using namespace std;

class Subject
{
public:
    Subject() {};
    virtual ~Subject() {};
    void addObserver(Observer *observer);
    void deleteObserver(Observer *observer);
    void notifyObservers();
    virtual int getStatus() = 0;
    virtual void setStatus(int status) = 0;
private:
    vector<Observer*> m_observers;
};

#endif