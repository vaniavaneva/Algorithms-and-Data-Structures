#include <iostream>
#include <chrono>;
using namespace std;
using namespace std::chrono;

int arr[] = { 18,19,22,23,29,32,41,43,69,77,80,86,90,92,95 };
int lenght = sizeof arr / sizeof arr[0];
int step = 0;

int binary_search(int min, int max, int search) {
	if (min > max) return NULL;

	step++;
	int mid = min + (max - min) / 2;

	if (search == arr[mid]) {
		return arr[mid];
	}
	else if (search < arr[mid]) {
		return binary_search(min, mid - 1, search);
	}
	else {
		return binary_search(mid + 1, max, search);
	}
}

int main()
{
	int left = 0;
	int right = lenght - 1;

	auto start = high_resolution_clock::now();
	int result = binary_search(left, right, 80);
	auto stop = high_resolution_clock::now();

	if (result != NULL) {
		cout << result << endl;
	}
	else {
		cout << "item not found\n";
	}

	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Algorithm worked for " << duration.count() << " microseconds and " << step << " steps\n";

	return 0;
}