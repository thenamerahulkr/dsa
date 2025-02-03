#include <bits/stdc++.h>
using namespace std;
void test(int x){
    if(x==0){
        return;
    }
    cout<<"test"<<endl;
    test(x-1);
}
void greet(){
    cout<<"hello pw"<<endl;
}
void fun(){
    cout<<"hello gw"<<endl;
    greet();
}
int main()
{
    fun();
    test(5);
}