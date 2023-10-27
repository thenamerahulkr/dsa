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
    // bubble sort
    // for(int i = 0;i<n;i++){
    //     // traverse the array 
    //     for(int j=0;j<n-i;j++){
    //         // swap the elements
    //        if(v[j]>v[j+1]){
    //          int temp = v[j];
    //         v[j]=v[j+1];
    //         v[j+1]=temp;
    //        }
    //     }
    // }
    // bubble sort optimised
   
    for(int i = 0;i<n;i++){
        // traverse the array 
         bool flag = true;
        for(int j=0;j<n-i;j++){
            // swap the elements
           if(v[j]>v[j+1]){
             int temp = v[j];
            v[j]=v[j+1];
            v[j+1]=temp;
            flag=false;
           }
        //    swap didn't happen;
           if(flag==true){
            break;
           }
        }
    }
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}