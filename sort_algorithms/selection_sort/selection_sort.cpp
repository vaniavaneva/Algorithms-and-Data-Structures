#include <iostream>
using namespace std;

void selection_sort(int arr[], int size) {
    int min_index;
    for (int i = 0; i < size; i++) {
        min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(arr[i], arr[min_index]);
        }
    }
}

int main()
{
    int arr[] = { 32, 9, 12, 6, 0, 5 };
    int size = sizeof arr / sizeof arr[0];
    selection_sort(arr, size);
    for (int a : arr) {
        cout << a << " ";
    }

    return 0;
}

//O(n^2)