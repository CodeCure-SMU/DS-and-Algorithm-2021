// BubbleSort_yejin.cpp
#include <iostream>
using namespace std;

void swap( int &x, int &y ){
	int temp;

	temp = x;
	x = y;
	y = temp;
}

void BubbleSort(int array[], int size){
	for ( int i = size - 1; i > 0; i--){
		for ( int j = 0; j < i; j++)
			if ( array[j] >  array[j + 1] )
				swap ( array[j], array[j + 1]);
	}
}

int main(void){
	int size;
	int array[1000];

	cin >> size;

	for ( int i = 0; i < size; i++){
		cin >> array[i];
	}

	BubbleSort(array, size);

	
	for ( int i = 0; i < size; i++){
		cout << array[i] << endl;
	}

	return 0;

}

