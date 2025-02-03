#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    // formation of prefix Sum
    for(int i=n-1;i>=0;i--){
        arr[i]+=arr[i-1];
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}