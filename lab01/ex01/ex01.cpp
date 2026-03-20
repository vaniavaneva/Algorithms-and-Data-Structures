#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 4, 8, 2, 1, 0, 3, -1, 6, 5, 7 };
	int sum = 0;
	for (int item : arr) {
		sum += item;
	}
	cout << "Sum = " << sum << ", Arith = " << sum / 10;

	return 0;
}