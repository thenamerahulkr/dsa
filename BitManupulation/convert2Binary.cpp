#include<bits/stdc++.h>
using namespace std;
string convert2Binary(int n){
    string res="";
    while(n>0){
        if(n%2==1){
            res+="1";
        }
        else{
            res+="0";
        }
        n=n>>1;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    int n=64;
    cout<<"13 ka binary: "<<convert2Binary(n)<<'\n';   
}