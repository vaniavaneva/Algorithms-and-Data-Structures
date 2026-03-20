#include <iostream>
using namespace std;

struct sp1 { int k1; sp1* n1; } *st1 =NULL;
struct sp2 { int k2; sp2* n2; } *st2 = NULL;
struct result { int key; result* next; } *start = NULL;

void add1(int n) {
    sp1* q = new sp1;
    q->k1 = n;
    q->n1 = NULL;

    if (st1 == NULL) {
        st1 = q;
        return;
    }

    sp1* p = st1;
    while (p->n1)
        p = p->n1;

    p->n1 = q;
}

void add2(int n) {
    sp2* q = new sp2;
    q->k2 = n;
    q->n2 = NULL;

    if (st2 == NULL) {
        st2 = q;
        return;
    }

    sp2* p = st2;
    while (p->n2)
        p = p->n2;

    p->n2 = q;
}

void add(int x) {
    result* q = new result;
    q->key = x;
    q->next = start;
    start = q;
    cout << q->key << "\n";
}

bool exists(int n) {
    result* p = start;
    while (p) {
        if (p->key == n) return true;
        p = p->next;
    }
    return false;
}

void obedinenie() {
    sp1* p1 = st1;
    while (p1) {
        if (!exists(p1->k1))
            add(p1->k1);
        p1 = p1->n1;
    }

    sp2* p2 = st2;
    while (p2) {
        if (!exists(p2->k2))
            add(p2->k2);
        p2 = p2->n2;
    }
}

//add sechenie

int main()
{
    add1(1);
    add1(2);
    add1(3);
    add2(2);
    add2(4);
    add2(1);
    obedinenie();
}