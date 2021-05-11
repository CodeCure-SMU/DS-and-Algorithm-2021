// SelectionSort_yejin.cpp
#include <iostream>
using namespace std;

void swap(int &x, int &y ){
	int temp;

	temp = x;
	x = y;
	y = temp;
}

void SelectionSort(int array[], int size){
	for ( int i = 0; i < size - 1; i++ ){
		int maxIdx = i;
		for ( int j = i + 1; j < size ; j++ ){
			if ( array[maxIdx] > array[j] )
				maxIdx = j;	
		}
		swap(array[i], array[maxIdx]);	
	}
}

int main(void){
	int array[1000];
	int size;

	cin >> size;

	for ( int i = 0; i < size; i++){
		cin >> array[i];
	}

	SelectionSort(array, size);

	for ( int i = 0; i < size; i++)
		cout << array[i] << endl;
}