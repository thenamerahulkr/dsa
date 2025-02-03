#include<bits/stdc++.h>
using namespace std;
void printSubset(string ans,string Original){
    if(Original.length()==0){
        cout<<ans<<" ";
        return;
    }
    char ch=Original[0];
    printSubset(ans,Original.substr(1));
    printSubset(ans+ch,Original.substr(1));
    
}
void subsetStore(string ans,string Original, vector<string> &st){
    if(Original.length()==0){
        st.push_back(ans);
        return;
    }
    char ch=Original[0];
    printSubset(ans,Original.substr(1));
    printSubset(ans+ch,Original.substr(1));
    
}
void print(vector<string> &st){
    for(string ele:st){
        cout<<ele;
    }
}
int main(){
    string str="rah";
    vector<string> st;
    string ans="";
    printSubset(ans,str);
    subsetStore(ans,str,st);
    print(st);
}