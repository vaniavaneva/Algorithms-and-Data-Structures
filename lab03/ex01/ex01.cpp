#include <iostream>
using namespace std;

struct elem { int key; elem* next; } *start;

void init() {
    start = NULL;
}

void Add(int num) {
    elem* p = start, * q;
    q = new elem;
    cout << "1, ";
    q->key = num;
    cout << "2, ";
    q->next = NULL;
    cout << "3, ";

    if (start == NULL) {
        // first element
        start = q;
        cout << "4, ";
        return;
    }

    while (p->next != NULL) {
        cout << "5, ";
        p = p->next;
    }
    cout << "6, ";
    p->next = q;
    cout << "7";
}

void Getprime(int start, int end)
{
    for (int num = start; num <= end; num++)
    {
        bool prime = true;
        double numSqrt = sqrt(num);
        for (int div = 2; div <= numSqrt; div++)
        {
            if (num % div == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            cout << num << " num is prime\t";
            Add(num);
            cout << "\n";
        }
    }
}

void Print() {
    if (start == NULL) {
        cout << "Empty list\n";
        return;
    }

    elem* p = start;
    cout << p->key << "\n";

    start = start->next;
    delete p;
}

int main()
{
    init();
    Getprime(100, 200);
    cout << "Printing and deleting\n";
    while (start != NULL) {
        Print();
    }

    return 0;
}