#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st; we cannot print like this
    // print the elements of stacks
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