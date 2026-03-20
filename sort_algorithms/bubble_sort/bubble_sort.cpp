#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size) {
    bool swapped;
    for (int i = 0; i < size; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int arr[] = { 6, 5, 4, 3, 1, 2 };
    int size = sizeof arr / sizeof arr[0];
    bubble_sort(arr, size);
    for (int a : arr) {
        cout << a << " ";
    }

    return 0;
}

//O(n^2)