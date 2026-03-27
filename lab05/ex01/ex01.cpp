#include <iostream>
#include <string>
using namespace std;

string linear_search(int arr[], int size, int search) {
	bool found = false;
	for (int i = 0; i < size; i++) {
		if (arr[i] == search) {
			found = true;
			return to_string(arr[i]);
		}
	}

	if (!found)	return "error";
}

int main()
{
	int arr[] = { 8,2,0,9,15,1,-3,7,4,-2 };
	int size = sizeof arr / sizeof arr[0];
	string result = linear_search(arr, size, 15);
	if (result != "error") {
		cout << result;
	}
	else {
		cout << "item not found";
	}

	return 0;
}