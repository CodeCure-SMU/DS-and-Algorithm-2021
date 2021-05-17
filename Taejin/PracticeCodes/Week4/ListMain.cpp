// ListMain.cpp
#include <iostream>

#include "LinkedList.h"

int main(void) {
	LinkedList list;

	list.insertFirst( 3 );
	list.insertFirst( 2 );
	list.insertFirst( 1 );
	list.insertFirst( 0 );

	list.PrintList( );

	list.insertLast( 4 );
	list.insertLast( 5 );
	list.insertLast( 6 );

	list.PrintList( );

	list.insertPosition( 5, 100 );
	list.insertPosition( 100, 1000 );
	list.insertPosition( 0, 1000 );

	list.PrintList( );

	return 0;
}