#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int n = v.size();
  
    for(int i = 0;i<n;i++){
        // traverse the array 
        for(int j=0;j<n-i;j++){
            // swap the elements
           if(v[j]==0){
             int temp = v[j];
            v[j]=v[j+1];
            v[j+1]=temp;
           }
        }
    }
    
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}