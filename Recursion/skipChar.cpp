#include<iostream>
using namespace std;
void removeChar(string ans,string Original){
    if(Original.length()==0){
        cout<<ans<<" ";
        return;
    }
    char ch=Original[0];
    if(ch=='a'){
        removeChar(ans,Original.substr(1));
    }
    else{
        removeChar(ans+ch,Original.substr(1));
    }
}
void removeChar1(string ans,string Original, int idx){
    if(idx==Original.length()){
        cout<<ans<<" ";
        return;
    }
    char ch=Original[idx];
    if(ch=='a'){
        removeChar1(ans,Original,idx+1);
    }
    else{
        removeChar1(ans+ch,Original,idx+1);
    }
}
int main(){
    string str="rahul";
    string ans="";
    removeChar1(ans,str,0);
}