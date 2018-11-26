#ifndef STACK_H
#define STACK_H


class Stack
{
public:
    Stack(int stacksize = 10);
    ~Stack();
    void Push(int x);
    int Pop();
    int HowMany();


private:
    int *data;
    int top;
    int maxSize;
};

#endif // STACK_H
