#include <iostream> 
#include <chrono> 
using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();

    int n = 10;
    long long int sum = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for(int y = 1; y <= n; y++)
                sum = sum * i;

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Sumata e: " << sum << "\n";
    cout << "Vremeto za izpalnenie e: " << duration.count() << " microseconds" << endl;
}