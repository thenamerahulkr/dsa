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
Node *deleteNode(Node *head, Node *target)
{
    if (head == target)
    {
        head = head->next;
        return head;
    }
    Node *temp = head;
    while (temp->next != target)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    Node *head = a;
    display(a);
    head = deleteNode(head, a);
    display(a);
}