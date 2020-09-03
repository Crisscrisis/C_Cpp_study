#include "../include/Subject.h"

void Subject::addObserver(Observer *observer)
{
    m_observers.push_back(observer);
}

void Subject::deleteObserver(Observer * observer)
{
    for (vector<Observer*>::iterator iter = m_observers.begin();
        iter != m_observers.end(); iter++)
    {
        if (*iter == observer)
        {
            m_observers.erase(iter);
            return;
        }
    }
}

void Subject::notifyObservers() {
    for (vector<Observer*>::iterator iter = m_observers.begin();
        iter != m_observers.end();
        iter++)
    {
        (*iter)->update();
    }
}
