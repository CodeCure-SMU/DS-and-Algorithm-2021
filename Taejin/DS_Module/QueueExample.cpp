// Queue_Example.cpp
#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	// Declaration
	queue<int> q;

	// Enqueue
	q.push( 1 );
	q.push( 2 );
	q.push( 3 );

	// Return front of queue
	cout << q.front() << endl;

	// Dequeue
	q.pop();

	return 0;
}