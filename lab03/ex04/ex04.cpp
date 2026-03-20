#include <iostream>
using namespace std;

struct stek { char key; stek* next; } *start = NULL;
bool valid = true;

void push(char n) {
    stek* p = start;
    start = new stek;
    start->key = n;
    start->next = p;
    cout << "added\n";
}

void pop() {
    if (start) {
        stek* p = start;
        start = start->next;
        cout << "removed\n";
        delete p;
    }
    else {
        valid = false;
    }
}

int main()
{
    string izraz = "1 + (3 + 2 - (2+3) * 4 - ((3+1)*(4-2)))";
    bool invalid = false;
    for (char skoba : izraz) {
        if (skoba == '(')    push(skoba);
        else if (skoba == ')')  pop();
    }
    if (!start && valid) cout << "Valid";
    else cout << "Invalid";
}