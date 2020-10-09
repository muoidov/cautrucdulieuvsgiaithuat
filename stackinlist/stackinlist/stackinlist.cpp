#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
typedef struct Node* stack;
bool isEmty(stack s) {
    return (s == NULL);
}
Node *createNode(int data) {
    Node *p = new Node();
    if (p == NULL) {
        return NULL;
    }
    p->data = data;
    p->next = NULL;
    return p;
}
void push(stack &s, int data) {
    Node *ptr = createNode(data); 
    if (isEmty(s)) {
        s = ptr;
    }
    else {
        ptr->next = s;
        s=ptr;
    }
}
int top(stack s) {
    if (!isEmty(s)) {
        return s->data;
    }
    else {
        cout << "stack is emty";
    }
}
int pop(stack &s) {
    if (!isEmty(s)) {
        int data = s->data;
        Node* x = s;
        s = s->next; delete(x);
        return data;
    }
    else {
        cout << "stack is emty";
    }
}
int main()
{
    stack s;
    push(s, 100);
    push(s, 101);
    push(s, 102);
    push(s, 103);
    push(s, 104);
    cout << "ads"<<top(s);
    pop(s);
    while (!isEmty(s)) {
        int data = top(s);
        pop(s);
        cout << data << "<--";
    }
    return 0;
}

