#include <iostream>
using namespace std;

int main()
{
    int mx[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mx[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += mx[i][j];
        }
        cout << "Sum on row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}