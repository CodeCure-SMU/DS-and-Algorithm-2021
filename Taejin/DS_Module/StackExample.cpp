// stack_stl.cpp
#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	// Delcaration
	stack<int> stck;

	// push
	stck.push( 1 );
	stck.push( 2 );
	stck.push( 3 );

	// top
	cout << stck.top() << endl;

	// pop
	stck.pop();

	return 0;
}