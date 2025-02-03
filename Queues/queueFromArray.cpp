#include<bits/stdc++.h>
using namespace std;
class Queue{
public:
    int front;
    int back;
    int arr[5];
    Queue(){
        front=0;
        back=0;
    }
    void push(int val){
        if(back==5){
            cout<<"Queue is full"<<endl;
        }
        arr[back]= val;
        back++;
    }
    void pop(){
        if(front-back==0){
            cout<<"Queue is FULL"<<endl;
            return;
        }
        else{
            front++;
        }
    }
    int front(){
        if(front-back==0){
            cout<<"Queue is FULL"<<endl;
            return -1;
        }
        return arr[front];
    }
    int back(){
        if(front-back==0){
            cout<<"Queue is FULL"<<endl;
            return -1;
        }
        return arr[back-1];
    }
    int size(){
        return back-front;
    }
    bool empty(){
        if(front-back==0){
            return true;
        }
        else return false;
    }
    void display(){
        for(int i = front;i<back;i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
 Queue q;
 q.push(10);
 q.push(20);
 q.display();


}