#include <iostream>
using namespace std;

int main()
{
    int m1[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int m2[3][2] = { {1, 2}, {3, 4}, {5, 6} };
    int m3[2][2] = { {0,0}, {0,0} };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int x = 0; x < 3; x++) {
                m3[i][j] += m1[i][x] * m2[x][j];
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}