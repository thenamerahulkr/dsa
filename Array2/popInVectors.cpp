#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;// you need not to mention the size of vector
     v.push_back(9);
     v.push_back(4);
     v.push_back(3);
     v.push_back(1);
     v.push_back(9);
     v.push_back(4);
     v.push_back(3);
     v.push_back(1);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
     v.pop_back();
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     
    
}