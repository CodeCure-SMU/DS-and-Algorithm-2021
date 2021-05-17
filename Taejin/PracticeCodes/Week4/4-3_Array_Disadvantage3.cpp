// 4-3_Array_Disadvantage3.cpp
#include <iostream>

using namespace std;

int main(void) {
	cout << "Input array capacity: ";
	int n;
	cin >> n;

	int* arr = new int[n];

	cout << "Input array: ";
	for ( int i = 0; i < n; i++ )
		cin >> arr[i];

	// do something

	cout << "Oops I want more memory space!\n";

	return 0;
}