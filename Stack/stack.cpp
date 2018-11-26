#include "stack.h"
#include <iostream>

using namespace std;

Stack::Stack(int stacksize)
{
    if (stacksize > 0) {
        maxSize = stacksize;
        data = new int[maxSize];
        for (int i = 0; i < maxSize; i ++) {
            data[i] = 0;
        }
    } else {
        data = 0;
        maxSize = 0;
    }
    top = 0;
}

Stack::~Stack() {
    delete[] data;
}

void Stack::Push(int x) {
    if (top < maxSize) {
        data[top] = x;
        top ++;
    }
    else {
        cout << "the stack is full." << endl;
    }
}

int Stack::Pop() {
    if (top <= 0) {
        cout << "the stack is empty." << endl;
        exit(1);
    }
    top --;
    return data[top];
}

int Stack::HowMany() {
    return top;
}
