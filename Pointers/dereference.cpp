#include<iostream>
using namespace std;
int main(){
    int x=4;
    int *p= &x;
    cout<<p;
    cout<<*p;
    int y=9;
    int *p1= &y;
    // accessing or changing the value of x//
    *p=5;
    return 0;
}