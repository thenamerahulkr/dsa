#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        next = prev = NULL;
        this->val = val;
    }
};
class DLL
{
public:
    int size;
    Node *head;
    Node *tail;
    DLL()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insertAtIndex(int val, int index)
    {
        if (index < 0 || index > size)
        {
            cout << "invaild index"
                 << " ";
        }
        else if (index == 0)
        {
            insertAtHead(val);
        }
        else if (index == size)
        {
            insertAtTail(val);
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i <= index - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            size++;
        }
    }
    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "cannt delete"
                 << " ";
            return;
        }
        head = head->next;
        if (head)
            head->prev = NULL;
        if (head == NULL)
            tail = NULL;
        size--;
    }
    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "list is empty";
        }
        else if (size == 1)
        {
            deleteAtHead();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIndex(int index)
    {
        if (size == 0)
        {
            cout << "list is empty";
            return;
        }
        else if (index < 0 || index >= size)
        {
            cout << "invalid index";
            return;
        }
        else if (index == 0)
        {
            return deleteAtHead();
        }
        else if (index = size - 1)
        {
            return deleteAtTail();
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i <= index; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
    }
    int getValue(int index){
        if(index==0){
            return head->val;
        }
        else if (size-1){
            return tail->val;
        }
        else if(index>=size||index <0){
            return -1;
        }
        else{
            Node *temp =head;
            int i =0;
            while(i<=index){
                temp=temp->next;
            }
            return temp->val;
        }

    }
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void displayRev(Node *tail)
    {
        while (tail)
        {
            cout << tail->val << " ";
            tail = tail->prev;
        }
    }
};
int main()
{
    DLL list;
    list.insertAtHead(10);
    list.display();
    list.insertAtTail(50);
    list.insertAtTail(40);
    list.display();
    list.insertAtIndex(20, 2);
    list.display();
}