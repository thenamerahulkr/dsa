#include<bits/stdc++.h>
using namespace std;
int binary_to_decimal(string &binary){
    int result=0;
    for(int i =binary.size()-1;i>=0;i--){
        char curr=binary[i];
        int num=curr-'0';
        result=result+num*(1<<(binary.size()-i-1));
    }
    return result;
}
string decimal_to_binary(int num){
    string result="";
    while(num>0){
        if(num%2==0){
            result+="0";
        }
        else{
            result+="1";
        }
        num=num/2;
    }
    return result;
}
int main()
{
    string str="10000";
    // cout<<binary_to_decimal(str)<<'\n';
    cout<<decimal_to_binary(13)<<'\n';
}