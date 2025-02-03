#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortZeroesOnes (vector<int>&v){
    //Method 2
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]==0){
            i++;
        }
        if(v[j]==1){
            j--;
        }
        if(v[i]==1&&v[j]==0){ 
            int temp=v[i];
           v[i]=0;
           v[j]=1;
           i++;
           j--;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    sortZeroesOnes(v);
    
    //Method 1
    // int noz=0;
    // int noo=0;
    // // sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //    if(v[i]==0){
    //     noz++;
    //    }
    //    else{
    //     noo++;
    //    }
    // }
    // for(int i=0;i<v.size();i++){
    //     if(i<noz){
    //         v[i]=0;
    //     }
    //     else{
    //         v[i]=1;
    //     }
    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
     
}