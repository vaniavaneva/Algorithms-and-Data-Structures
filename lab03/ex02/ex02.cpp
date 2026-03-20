#include <iostream>
using namespace std;

struct stek{ string keyStek; stek* nextStek;} *start = NULL;
struct op { string keyOp; op* nextOp; } *first=NULL, *last = NULL;

//void initStek() {
//    start = NULL;
//}
//
//void initOp() {
//    first = NULL;
//    last = NULL;
//}

void push(string element) {
    stek* p = start;
    start = new stek;
    start->keyStek = element;
    start->nextStek = p;
}

string pop() {
    if (start) {
        stek* p = start;
        start = start->nextStek;
        return p->keyStek;
        delete p;
    }
    else {
        return "error";
    }
}

void Add_que(string n) {
    op* p = last;
    last = new op;
    last->keyOp = n;
    last->nextOp = NULL;
    if (p != NULL)  p->nextOp = last;
    if (first == NULL) first = last;
}

string Remove() {
    if (first) {
        op* p = first;
        first = first->nextOp;
        return p->keyOp;
        delete p;
    }
    else {
        return "error";
    }
}

int main()
{
    /*initStek();
    initOp();*/
    push("1. Ivan");
    push("2. Nikolay");
    push("3. Maria");
    push("4. George");

    string n = pop();
    while (n != "error"){
        cout << n << endl;
        n = pop();
    }

    Add_que("Message One");
    Add_que("Message Two");
    Add_que("Message Three");
    Add_que("Message Four");

    string msg = Remove();
    while (msg != "error")
    {
        cout << msg << endl;
        msg = Remove();
    }
}