// LinkedList.cpp
#include <iostream>

#include "LinkedList.h"

using namespace std;

Node::Node( ) {
	this->val = 0;
	this->next = nullptr;
}

Node::Node( int val ) {
	this->val = val;
	this->next = nullptr;
}

LinkedList::LinkedList( ) {
	this->head = nullptr;
	this->size = 0;
}

LinkedList::~LinkedList( ) {
	Node* curr = this->head;
	while ( curr != nullptr ) {
		Node* next = curr->next;
		delete curr;

		curr = next;
	}
}

bool LinkedList::isEmpty( ) {
	return ( this->size == 0 );
}

bool LinkedList::getSize( ) {
	return this->size;
}

void LinkedList::PrintList( ) {
	for ( Node* curr = this->head; curr != nullptr; curr = curr->next )
		cout << curr->val << " -> ";
	cout << "NULL" << endl;
}

void LinkedList::insertFirst( int val ) {
	Node* newNode = new Node( val );

	newNode->next = head;
	head = newNode;

	this->size++;
}

void LinkedList::insertLast( int val ) {
	if ( this->isEmpty() )
		this->insertFirst( val );
	else {
		Node* newNode = new Node( val );

		Node* prev;
		for ( prev = this->head; prev->next != nullptr; prev = prev->next );
		prev->next = newNode;

		this->size++;
	}

}

void LinkedList::insertPosition( int pos, int val ) {
	if ( pos == 0 || this->isEmpty( ) )
		this->insertFirst( val );
	else if ( this->getSize( ) <= pos )
		this->insertLast( val );
	else {
		Node* newNode = new Node( val );

		Node* prev = this->head;
		for ( int i = 0; i < pos - 1; i++, prev = prev->next );

		Node* next = prev->next;

		newNode->next = next;
		prev->next = newNode;

		this->size++;
	}
}

void LinkedList::deleteFirst( ) {
	if ( !this->isEmpty() ) {
		Node* removeNode = head;
		head = head->next;
		delete removeNode;

		this->size--;
	}
}

void LinkedList::deleteLast( ) {
	if ( !this->isEmpty() ) {
		if ( this->getSize( ) == 1 )
			this->deleteFirst( );
		else {
			Node* prevPrev;
			for ( prevPrev = this->head; prevPrev->next->next != nullptr; prevPrev = prevPrev->next );

			Node* removeNode = prevPrev->next;
			prevPrev->next = removeNode->next;

			delete removeNode;

			this->size--;
		}
	}
}

void LinkedList::deletePosition( int pos ) {
	if ( !this->isEmpty() ) {
		if ( pos == 0 )
			this->deleteFirst( );
		else if ( this->getSize( ) <= pos)
			this->deleteLast( );
		else {
			Node* prev = this->head;
			for ( int i = 0; i < pos - 1; i++, prev = prev->next );

			Node* removeNode = prev->next;
			prev->next = removeNode->next;

			delete removeNode;
		}
	}
}
