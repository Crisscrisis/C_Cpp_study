#ifndef OBSERVER_H
#define OBSERVER_H
class Observer
{
public:
    Observer() {};
    virtual ~Observer() {};
    // 定义纯虚函数，规范接口
    virtual void update() = 0;
};
#endif