#include<iostream>
using namespace std;
int main(){
    // char ch[6]={'a','b','c','d','e'};
    // //  char ch[5]="abcd";
    // // for(int i=0;i<5;i++){
    // //     cout<<ch[i]<<" ";
    // // }
    // cout<<(int)(ch[5]);
    char ch[]={'a','b','c','d','e'};
    for(int i=0;ch[i]!='\0';i++){
        cout<<ch[i];
    }
}