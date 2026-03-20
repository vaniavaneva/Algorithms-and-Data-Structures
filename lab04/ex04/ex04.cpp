#include <iostream> 
#include <chrono> 
using namespace std;
using namespace std::chrono;

struct elem { int key; elem* next; } *start;

void init() {
    start = NULL;
}

void Add(int num) {
    elem* p = start, * q;
    q = new elem;
    //cout << "1, ";
    q->key = num;
    //cout << "2, ";
    q->next = NULL;
    //cout << "3, ";

    if (start == NULL) {
        // first element
        start = q;
        //cout << "4, ";
        return;
    }

    while (p->next != NULL) {
        //cout << "5, ";
        p = p->next;
    }
    //cout << "6, ";
    p->next = q;
    //cout << "7";
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
            //cout << num << " num is prime\t";
            Add(num);
            //cout << "\n";
        }
    }
}

void Delete() {
    if (start == NULL) {
        cout << "Empty list\n";
        return;
    }

    elem* p = start;
    //cout << p->key << "\n";

    start = start->next;
    delete p;
}

int main()
{
    int primeNums = 0;

    init();
    auto startClock = high_resolution_clock::now();
    Getprime(200, 300);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - startClock);

    //cout << "Printing and deleting\n";
    while (start != NULL) {
        primeNums += 1;
        Delete();
    }

    cout << "Broi prosti chisla: " << primeNums << "\n";
    cout << "Vremeto za izpalnenie e: " << duration.count() << " microseconds" << endl;
}