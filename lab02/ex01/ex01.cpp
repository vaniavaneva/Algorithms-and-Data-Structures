#include <iostream>
using namespace std;

int main()
{
    int a = 6;
    int b = 3;

    cout << "Original values: ";
    cout << "a = " << a << ", ";
    cout << "b = " << b << "\n";

    int* p = &a;
    int t = *p;
    a = b;
    b = t;

    cout << "     After swap: ";
    cout << "a = " << a << ", ";
    cout << "b = " << b << "\n";

    return 0;
}
