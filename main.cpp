#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node{
	int data;
	Node *next; 
};
using namespace std;
int main(int argc, char** argv) {
	//tao node
	Node *head=new Node();
	head->data=1;
	head->next=NULL;
	Node *second=new Node;
	second->data=2;
	second->next=NULL;
	Node *third=new Node();
	third->next=NULL;
	third->data=3;
	//lien ket
	head->next=second;
	second->next=third;
	//truy cap
	int data=head->data;
	cout<<data; 
	return 0;
}
