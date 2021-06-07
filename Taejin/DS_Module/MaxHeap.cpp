// MaxHeap.cpp
#include "MaxHeap.h"

Heap::Heap() {
	size = 0;
}

Heap::~Heap() {
	size = 0;
}

int Heap::getSize() {
	return size;
}

bool Heap::empty() {
	return (size == 0);
}

void Heap::swap(int* val1, int* val2) {
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

void Heap::push(int val) {
	int idx = size + 1;
	nodes[idx] = val;
	size++;

	int me = idx, mom = idx / 2;
	while (mom != 0 && nodes[mom] < nodes[me]) {
		swap(&nodes[mom], &nodes[me]);
		me = mom;
		mom = me / 2;
	}
}

void Heap::heapify(int idx) {
	int leftIdx = idx * 2, rightIdx = idx * 2 + 1;

	int maxIdx;
	if (size < leftIdx) // 왼쪽, 오른쪽 자식이 없음
		return;
	else if (size < rightIdx) // 오른쪽 자식이 없음
		maxIdx = nodes[idx] < nodes[leftIdx] ? leftIdx : idx;
	else {
		maxIdx = nodes[rightIdx] < nodes[leftIdx] ? leftIdx : rightIdx;
		maxIdx = nodes[idx] < nodes[maxIdx] ? maxIdx : idx;
	}

	if (maxIdx != idx) {
		swap(&nodes[maxIdx], &nodes[idx]);
		heapify(maxIdx);
	}
}

int Heap::pop() {
	int rtrnVal = nodes[1];

	nodes[1] = nodes[size];
	size--;

	heapify(1);

	return rtrnVal;
}