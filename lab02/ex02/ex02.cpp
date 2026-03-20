#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << endl;

    for (int* p = arr; p <= &arr[9]; p++) {
        cout << *p << " ";
    }

    return 0;
}