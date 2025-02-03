#include<iostream>
#include<stack>
using namespace std;
void pushBottom(stack<int> &st , int val){
    stack<int> temp;
    while(st.size()>0){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    st.push(val);
    // putting back to stack 
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
}
void pushAtIndex(stack<int> &st , int index , int val){
    stack<int> temp;
    while(st.size()>index){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    st.push(val);
    // putting back to stack 
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl;
}
void display(stack<int> &st){
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    // putting back to stack 
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
}
int main(){
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    pushBottom(st,70);
    display(st);
    pushAtIndex(st,2,90);
    display(st);    
}