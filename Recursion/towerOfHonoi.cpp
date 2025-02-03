#include<bits/stdc++.h>
using namespace std;
void honoi(int n , char a, char b , char c ){
    if(n==0){
        return;
    }
    honoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    honoi(n-1,b,a,c);
}
int main()
{
    int n=4;
    honoi(n,'a','b','c');
}
