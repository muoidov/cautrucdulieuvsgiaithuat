
#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
typedef struct Node* queue;

bool isEmty(queue q) {
	return q == NULL;
}

Node* createNode(int data) {
	Node* p = new Node();
	if (p == NULL) {
		return p;
	}
	p->next = NULL;
	p->data = data;
}
int enQueue(queue& q, int data) {
	Node* p = createNode(data);
	if (q == NULL) {
		q = p;
	}
	else {
		Node* ptr = q;
		while (ptr != NULL && ptr->next != NULL) {
			ptr = ptr->next;
		}
		p->next = p;
	}
	return 0;
}
int peek(queue q) {
	if (!isEmty(q)) {
		return q->data;
	}
	else {
		return 0;
	}
}
int deQueue(queue& q) {
	if (!isEmty(q)) {
		int data = q->data;
		Node* p = q;
		q = q->next;
		delete(p);
		return data;
	}
	else {
		return 0;
	}
}
int main()
{
	queue q = NULL;
	enQueue(q, 10);
	enQueue(q, 101);
	enQueue(q, 102);
	enQueue(q, 103);
	enQueue(q, 104);
	enQueue(q, 105);
	cout << "Queue " << isEmty(q) << endl;
	cout << "asdasd" << peek(q) << endl;
	while (!isEmty(q)) {
		int data = peek(q);
		deQueue(q);
		cout << " " << data << endl;

	}
	cout << "adssad" << isEmty(q) << endl;
	return 0;
}



