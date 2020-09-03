#include <iostream>
#include "../include/ConcreteSubject.h"

using namespace std;

void ConcreteSubject::setStatus(int status)
{
    m_status = status;
    cout << "setStatus subject[" << m_subjectName << "] status:" << status << endl;
}

int ConcreteSubject::getStatus()
{
    return m_status;
}