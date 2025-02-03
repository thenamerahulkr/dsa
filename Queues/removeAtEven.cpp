#include<bits/stdc++.h>
using namespace std;
void display(queue<int> &q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<endl;
        q.pop();
        q.push(x);
    }
}
void remove(queue<int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2==0){
            q.pop();
        }
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main()
{
 queue<int> q;
  //push
  //pop
  //top==front
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  //cout<<q.back()<<endl;
  //cout<<q.front()<<endl;
  //q.pop();
  //cout<<q.front();
  display(q);
  cout<<endl;
  remove(q);
  display(q);
}