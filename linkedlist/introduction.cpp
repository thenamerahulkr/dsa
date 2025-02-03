#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    // Node a;
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // a.data = 10;
    // Node b;
    // b.data = 20;
    // Node c;
    // c.data = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;
    // cout << a.next;
    // cout << a.data;
    // cout<<(a.next)->data;
    // cout << (*(*(*(a.next)).next).next).data;
    Node temp = a;

    // isme last wala element print nhi hoga

    // while(temp.next!=NULL){
    //     cout<<temp.data;
    //     temp = (*(temp.next));
    // }
     
    while(true){
        cout<<temp.data;
        if(temp.next==NULL) break;
        temp = (*(temp.next));
    }
}