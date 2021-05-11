// DequeExample.cpp
#include <iostream>
#include <deque>

using namespace std;

int main(void) {
	// Declaration
	deque<int> dq;

	// Push values
	dq.push_front( 2 );
	dq.push_front( 1 );
	dq.push_back( 3 );

	// Pop values
	dq.pop_front( );
	dq.pop_back( );

	// Front and Back of deque
	cout << dq.front() << ' ' << dq.back() << '\n';

	return 0;
}