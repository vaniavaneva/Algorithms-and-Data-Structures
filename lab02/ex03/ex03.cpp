#include <iostream>
using namespace std;

double findMin(double* p, int size);
double findMax(double* p, int size);

int main()
{
    double arr[] = {3, 7, 2, 0, 9, 5, 6, 1, 8, 4};
    int size = sizeof arr / sizeof arr[0];
    double* p = arr;

    double minResult = findMin(p, size);
    double maxResult = findMax(p, size);

    cout << "min element: " << minResult;
    cout << "\nmax element: " << maxResult;

    return 0;
}

double findMin(double* p, int size) {
    double* end = p + size;
    double min = *p;

    for (; p < end; p++) {
        if (*p < min) {
            min = *p;
        }
    }

    return min;
}

double findMax(double* p, int size) {
    double* end = p + size;
    double max = *p;

    for (; p < end; p++) {
        if (*p > max) {
            max = *p;
        }
    }

    return max;
}