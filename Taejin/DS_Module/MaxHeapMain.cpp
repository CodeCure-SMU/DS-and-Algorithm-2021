// MaxHeapMain.cpp
#include <iostream>
#include "MaxHeap.h"

using namespace std;

int main(void) {
	Heap h;

	h.push(4);
	h.push(3);
	h.push(2);
	h.push(1);

	cout << h.getSize() << endl;
	cout << h.empty() << endl;

	cout << h.pop() << endl;
	cout << h.pop() << endl; // '\n';

	return 0;
}