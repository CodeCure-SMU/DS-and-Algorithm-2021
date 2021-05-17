// ListMain2.cpp
#include <iostream>

#include "LinkedList.h"

int main(void) {
	LinkedList list;

	list.insertLast( 0 );
	list.insertLast( 1 );
	list.insertLast( 2 );

	list.PrintList( );

	return 0;
}