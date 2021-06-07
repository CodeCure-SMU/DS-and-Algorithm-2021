// MaxHeap.h
class Heap {
private:
	int size;
	int nodes[1'001];

	void heapify(int idx);
	void swap(int* val1, int* val2);
public:
	Heap();
	~Heap();
	void push(int val);
	int pop();
	int getSize();
	bool empty();
};