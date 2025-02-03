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
void reverse(queue<int> &q){
    stack<int> st;
    int n=q.size();
    for(int i=1;i<=n;i++){
        st.push(q.front());
        q.pop();
    }
    //now back from stack to queue
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
    }
    display(q);
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
  //cout<<q.back()<<endl;
  //cout<<q.front()<<endl;
  //q.pop();
  //cout<<q.front();
//   display(q);
reverse(q);
}