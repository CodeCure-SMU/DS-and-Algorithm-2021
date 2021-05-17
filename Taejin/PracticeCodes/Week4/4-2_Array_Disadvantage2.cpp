// 4-2_Array_Disadvantage2.cpp
#include <iostream>

using namespace std;

void PrintArray( int* arr, int size ) {
	for ( int i = 0; i < size; i++ )
		cout << arr[i] << ' ';
	cout << '\n';
}

int main(void) {
	cout << "Input array capacity: ";
	int n;
	cin >> n;

	int* arr = new int[n];

	cout << "Input array size: ";
	int size;
	cin >> size;

	cout << "Input array: ";
	for ( int i = 0; i < size; i++ )
		cin >> arr[i];

	cout << "Array: ";
	PrintArray( arr, size );

	delete[] arr;

	return 0;
}