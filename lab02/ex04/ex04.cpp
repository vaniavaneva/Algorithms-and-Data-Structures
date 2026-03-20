#include <iostream>
using namespace std;

int main()
{
    int m1[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int m2[3][2] = { {6, 5}, {4, 3}, {2, 1} };
    int m3[2][2] = { {0, 0}, {0, 0} };
    int (*row)[2] = m3;
    int* col;

    /*for (int i = 0; i < 3; i++) {
        col = row[i];
        for (int j = 0; j < 2; j++){
            cin >> col[j];
        }
    }*/

    for (int i = 0; i < 2; i++) {
        col = row[i];
        for (int j = 0; j < 2; j++) {
            for (int x = 0; x < 3; x++) {
                col[j] += m1[i][x] * m2[x][j];
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

//20 14
//56 41