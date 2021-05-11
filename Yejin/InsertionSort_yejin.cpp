// InsertionSort_yejin.cpp
#include <iostream>
using namespace std;

void Swap(int &x, int &y){
	int temp;

	temp = x;
	x = y;
	y = temp;
}

void InsertionSort(int array[], int size){
	int temp;
	int numJ;
	for ( int i = 1; i < size; i++ ){
		temp = array[i];
		for ( numJ = i - 1; numJ >= 0; numJ-- ){
			if ( temp < array[numJ] )
				array[numJ + 1] = array[numJ];
			else {
				break;
			}
		}
		array[numJ + 1] = temp;
	}
}
 
int main(void){
	int size;
	int array[1000];

	cin >> size;

	for ( int i = 0; i < size; i++ ){
		cin >> array[i];
	}

	InsertionSort(array, size);

	for ( int i = 0; i < size; i++ ) {
		cout << array[i] << '\n';
	}

	return 0;

}
