#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.push_back(9);
    v.push_back(0);
    int x=9;
    int idx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            idx=i;
        }
    }
    cout<<idx;
    // back loops using here for the same question
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
}
