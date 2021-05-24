#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* frnt = NULL;
Node* rear = NULL;
Node* tmp;

void Insert(int data) {
	if (rear == NULL) {
		rear = new Node();
		rear->next = NULL;
		rear->data = data;
		frnt = rear;
	}
	else {
		tmp = new Node();
		rear->next = tmp;
		tmp->data = data;
		tmp->next = NULL;
		rear = tmp;
	}
}

void Delete() {
	tmp = frnt;
	if (frnt != NULL) {
		if (tmp->next != NULL) {
			tmp = tmp->next;
			delete(frnt);
			frnt = tmp;
		}
		else {
			delete(frnt);
			frnt = NULL;
			rear = NULL;
		}
	}
}

void ShowQueue() {
	tmp = frnt;
	while (tmp != NULL) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << '\n';
}

int main() {
	Insert(10);
	Insert(20);
	Insert(30);

	ShowQueue();

	Delete();
	Delete();

	ShowQueue();

	Insert(40);

	ShowQueue();

	return 0;

}
