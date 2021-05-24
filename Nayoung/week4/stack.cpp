#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* Top = NULL;

bool IsEmpty() {
	if (Top == NULL) return true;
	else return false;
}

void Push(int data) {
	Node* p = new Node;
	p->data = data;
	p->next = Top;
	Top = p;
}

int Pop() {
	if (!IsEmpty()) {
		Node* temp = Top;
		int data = temp->data;
		Top = temp->next;
		delete(temp);
		return data;
	}
}

void ShowStack() {
	if (!IsEmpty()) {
		Node* temp = Top;
		while (temp != NULL) {
			cout << temp->data << ' ';
			temp = temp->next;
		}
		cout << '\n';
	}
}

int main() {
	Push(10);
	Push(20);
	Push(30);
	Push(40);

	ShowStack();
	Pop();

	Push(50);
	Push(60);
	Push(70);

	ShowStack();
	Pop();
	Pop();
	ShowStack();

	return 0;
}
