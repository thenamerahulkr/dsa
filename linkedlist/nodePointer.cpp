#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}
void displayRec(Node *head){
    Node *temp = head;
    cout<<temp->data<<" ";
    if(temp->next== NULL){
        return;
    }
    displayRec(temp->next);
    cout<<endl;
}
void displayRev(Node *head){
    Node *temp = head;
    if(temp == NULL){
        return;
    }
    displayRev(temp->next);
    cout<<temp->data<<" ";
}
int size(Node *head){
    Node *temp = head;
    int count =0;
    while (temp != NULL)
    {
        cout << temp->data;
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    // Node a;
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    displayRec(a);
    displayRev(a);
}