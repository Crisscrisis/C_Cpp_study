#ifndef CONCRETE_SUBJECT_H
#define CONCRETE_SUBJECT_H
#include <string>
#include "Observer.h"
#include "Subject.h"

using namespace std;

class ConcreteSubject : public Subject
{

public:
    ConcreteSubject(string name) :m_subjectName(name) {};
    ~ConcreteSubject() {};

    void setStatus(int status);
    int getStatus();

private:
    string m_subjectName;
    int m_status = 0;
};
#endif