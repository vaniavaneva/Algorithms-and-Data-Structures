#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int lastIndex = i - 1;
        while (lastIndex >= 0 && current < arr[lastIndex]) {
            arr[lastIndex + 1] = arr[lastIndex];
            lastIndex -= 1;
        }
        arr[lastIndex + 1] = current;
    }
}

int main()
{
    int arr[] = { 5, 7, 1, 0, -2, 3 };
    int size = sizeof arr / sizeof arr[0];
    insertion_sort(arr, size);
    for (int a : arr) {
        cout << a << " ";
    }

    return 0;
}

//O(n^2)