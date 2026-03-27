#include <iostream>
#include <chrono>;
#include < algorithm>;
using namespace std;
using namespace std::chrono;

int seq_search(int arr[], int start, int end, int key) {
    for (int i = start; i < end; i++) {
        if (arr[i] == key) {
            return arr[i];
        }
    }
    return -1;
}

int jmp_search(int arr[], int n, int key, unsigned step)
{
    int i, rt, lf;
    for (i = 0; i < n && arr[i] < key; i += step);
    if (i < step)
        lf = 0;
    else
        lf = i + 1 - step;
    if (n < i)
        rt = n - 1;
    else
        rt = i;
    return seq_search(arr, lf, rt, key);  // фунцкия за последователно търсене в                     
    //интервала от lf до rt 
}// 5 7 8 9 12 45 65 68 69 70 80 90 

int main()
{
    int arr[5] = { 1, 5, 7, 2, 9 };
    int step = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    /*for (int i = 0; i < n; i++) {
        arr[i] = rand() % 5001;
    }*/

    sort(arr, arr+n);
    int k = 1;

    auto start = high_resolution_clock::now();
    int pos = jmp_search(arr, n, k, step);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    if (pos != -1) {
        cout << pos << endl;
    }
    else {
        cout << "Element not found\n";
    }
    cout << "Algorithm worked for " << duration.count() << "nanoseconds\n";
}