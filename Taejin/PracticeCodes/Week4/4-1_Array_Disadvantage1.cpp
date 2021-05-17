// 4-1_Array_Disadvantage1.cpp
#include <iostream>

using namespace std;

void PrintArray( int* arr, int size ) {
	for ( int i = 0; i < size; i++ )
		cout << arr[i] << ' ';
	cout << '\n';
}

int main(void) {
	int n;
	cout << "Input array size: ";
	cin >> n;

	int* arr = new int[n];

	cout << "Input array: ";
	for ( int i = 0; i < n; i++ )
		cin >> arr[i];

	cout << "Input delete index: ";
	int delete_idx;
	cin >> delete_idx;

	for ( int i = delete_idx; i < n - 1; i++ )
		arr[i] = arr[i + 1];

	cout << "After delete: ";
	PrintArray( arr, n - 1 );

	delete[] arr;

	return 0;
}