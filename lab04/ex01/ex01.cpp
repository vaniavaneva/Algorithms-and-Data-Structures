#include <iostream> 
#include <chrono> 
using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();

    int n = 1000;
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            sum = sum + i;

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Sumata e: " << sum << "\n";
    cout << "Vremeto za izpalnenie e: " << duration.count() << " microseconds" << endl;
}