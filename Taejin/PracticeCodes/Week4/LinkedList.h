// LinkedList.h
class Node {
public:
	int val;
	Node* next;
	Node( );
	Node( int v );
};

class LinkedList {
private:
	Node* head;
	int size;
public:
	LinkedList( );
	~LinkedList( );

	bool isEmpty( );
	int getSize( );
	void PrintList( );

	void insertFirst( int val );
	void insertLast( int val );
	void insertPosition( int pos, int val );

	void deleteFirst( );
	void deleteLast( );
	void deletePosition( int pos );
};