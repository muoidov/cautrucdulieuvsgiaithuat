#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
struct Node{
	int data;
	Node *next;
};
struct List{
	Node *head;
	Node *tail;
};
void Init(List &l){
	l.head=l.tail=NULL;
	
}
Node*createNode(int x){
	Node *p=new Node;
	if(p==NULL) exit(1);
	p->next=NULL;
	p->data;
	return p;
}
bool isEmty(List l){
	if(l.head==NULL) return true;
	return false;
}
void addHead(List &l,int x){
	Node *p=createNode(x);
	if(isEmty(l)) l.head=l.tail=p;
	else{
		p->next=l.head;
		l.head=p;
		
	}
	l.tail->next=l.head;
}
void addTail(List &l,int x){
	Node *p=createNode(x);
	if(isEmty(l)) addHead(l,x);
	else{
		l.tail->next=p;
		l.tail=p;
		
	}
	l.tail->next=l.head;
}
Node *search(List l,int k){
	Node *p=l.head;
	do{
		if(p->data==k) return p;
		else p=p->next;
	}while(p!=l.head);
	return NULL;
	
}
void addMid(List &l,int x,int k){
	Node *p=search(l,k);
	if(p!=NULL){
		Node*q=createNode(x);
		Node*r=p->next;
		p->next=q;
		q->next=r;
	}
	else cout<<"\nKhong tim thay node data";
}
void nhap(List &l){
	cout<<"Nhap so pt ban dau cua list";cin>>n;
	for(int i=1;i<=n;i++) addTail(l,i);
}
void xuat(List l){
	Node *p=l.head;
	
	do{
		cout<<" "<<p->data;
		p=p->next;
	}while(p!=l.head)
}
void delHead(List &l){
	if(!isEmty(l)){
		Node*p=l.head;
		l.head=l.head=>next;
		delete p;
	}
	l.tail->next=l.head;
}
void delTail(List &l){
	if(!isEmty(l)){
		Node*p=l.head;
		Node*q=new Node;
		while(p->next!=l.tail) p=p->next;
		q=p;
		p=p->next;
		
		l.tail=q;
		l.tail->next=NULL;
		delete p;
	}
	l.tail->next=l.head;
}
void delAtk(List &l,int k){
	if(k<1) delHead(l);
	else if(k>=n) delTail(l);
	else{
		int dem=0;
		if(!isEmty(l)){
			Node*p=l.head;
			Node*q=new Node;
			while(p!=NULL){
				dem++;
				q=p;
				if(dem==k) break;
				else p=p->next;
				
			}
			Node *r=l.head;
			while(r->next!=q) r=r->next;
			r->next=q->next;
			delete q;
		}
	}
}
void menu(){
	List l;
	Init(l);
	nhap(l);
	xuat(l);
	int k, x, lc;
	do{
		cout<<"\n______MENU______\n1_Chen dau.\n2_chen cuoi."
			<<"\n3_Chen sau vi tri node data = k.\n4_Chen vao vi tri bat ki."
			<<"\n5_Xuat Thong tin List.\n6_Xoa phan tu dau List."
			<<"\n7_Xoa phan tu o cuoi List.\n8_Xoa node o vi tri k."
		//	<<"\n9_Sap xep QuickSort."
			<<"\n0_Thoat.\n_Ban chon ? ";
			cin>> lc;
		switch(lc){
			case 0: break;
			case 1: cout<<"\nNhap x: "; cin>> x; addHead(l,x); n++; break;
			case 2: cout<<"\nNhap x: "; cin>> x; addTail(l,x); n++; break;
			case 3: cout<<"\nNhap x, k: "; cin>> x >> k; addMid(l,x, k);n++; break;
		//	case 4: cout<<"\nNhap x, vi tri k: "; cin>> x >> k; addAtK(l,x,k); n++; break;
			case 5: xuat(l); break;
			case 6: delHead(l); n--; break;
			case 7: delTail(l); n--; break;
			case 8: cout<<"\nNhap vi tri k: "; cin>> k; delAtK(l,k); n--; break;
		//	case 9: QuickSort(l); break;
		}
	}while(lc != 0 );
}

int main(){
	menu();	
	return 0;
}
