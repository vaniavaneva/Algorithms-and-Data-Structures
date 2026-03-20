#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = { 15, 9, 3, 5, -1, 7 };
    int size = sizeof arr / sizeof arr[0];
    quick_sort(arr, 0, size - 1);
    for (int a : arr) {
        cout << a << " ";
    }

    return 0;
}

//O(nlogn)