#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Stack{
    public:
    Node *head;
    int size;
    Stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
        Node *temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<< "Stack is empty";
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
         if(head==NULL){
            cout<< "Stack is empty";
            return -1;
        }
        return head->val;
    }
    void print(Node *temp){
        if(temp==NULL){
            return;
        }
        print(temp->next);
        cout<<temp->val<<" ";
    }
    void display(){
        Node *temp=head;
        print(temp);
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    // cout<<st.size();
    st.display();
    st.pop();
    st.display();

}