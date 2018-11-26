#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack s1;
    s1.Push(1);
    s1.Push(12);
    s1.Push(32);

    cout << s1.HowMany() << endl;

    int x1 = s1.Pop();
    int x2 = s1.Pop();
    int x3 = s1.Pop();

    cout << x1 << "\t" << x2 << "\t" << x3 << endl;
    cout << s1.HowMany() << endl;
    return 0;
}
