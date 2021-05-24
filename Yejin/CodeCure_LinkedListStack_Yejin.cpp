// CodeCure_LinkedListStack.cpp
#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
}; 

Node* top = NULL;

void Push(int data) {
	Node* node = new Node();
	node->data = data;
	node->next = top;
	top = node;
}

bool isEmpty(){
	if ( top == NULL )
		return true;
	else 
		return false;
}

void Top(){
	if ( isEmpty() == true )
		cout << "Top = NULL" << endl;
	else 
		cout << "Top = " << top->data << endl;
}

int Pop(){
	if ( top == NULL ) {
		cout << "top is NULL" << endl;
		return 0;
	}

	else {
		int value = top->data;
		Node* temp = top;
		delete(top);
		top = temp->next;
		delete(temp);
		return value;
	}
}

void Display(){
	Node* ptr;
	if ( isEmpty() == true) 
		cout << "stack is empty" << endl;

	else {
		ptr = top;
		cout << "elements : ";
		while ( ptr != NULL ) {
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
	}
	cout << endl;
}

int main(void){

	Push(1);
	Push(2);
	Push(3);

	Display();
	Top();

	Pop();
	Pop();

	Display();
	Top();

	Push(5);

	Display();
	Top();

	return 0;

}











