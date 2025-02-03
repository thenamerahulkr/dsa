#include <iostream>
using namespace std;
class Node // user defined data-type
{
public: 
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
}; 
class LinkedList // user defined data structure
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node *temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertAtTail(int val){
        Node *temp = new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
        temp->next=tail;
        tail=temp;
        }
        size++; 
    }
    void insertAtIndex(int val , int index){
        if(index==0){
            Node *temp = new Node(val);
            temp->next=head=tail;
        }
        else{
            Node *t = new Node(val);
            Node *temp=head;
            for(int i =0;i<index;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            t->next=temp;
        }
    }
    int getValue(int index){
        if(index==0){
            return head->data;
        }
        else if (size-1){
            return tail->data;
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
            return temp->data;
        }
    }
    void deleteAtHead(int index){
        if(size==0){
            cout<<"cann't delete"<<" ";
        }
        else if(size>1){
            head=head->next;
            size--;
        }
        else if(size==1){
            head=tail=NULL;
            size--;
        }
    }
    void deleteAtTail(int index){
        if(size==0){
            cout<<"cannt delete"<<" ";
        }
        Node *temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
        }
    void deleteAtIndex(int index){
        if(size==0){
            cout<<"cannot delete"<<" ";
        }
        Node *temp=head;
        int i=0;
        while(i<index){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
        
    }
};

int main()
{
    LinkedList LL;
    LL.insertAtHead(10);
    LL.insertAtHead(20);
    LL.insertAtTail(40);
    LL.display();
    cout<<LL.size<<" ";
    LL.deleteAtIndex(2);
    LL.display();



}