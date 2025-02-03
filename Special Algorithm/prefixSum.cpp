#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[]={1,2,3,4,5,6,7,8,9,10,1,12,13};
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    // formation of prefix Sum
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    // check if that index is present or not for division
    bool flag=false;
    int index=-1;
    for(int j=0;j<n;j++){
        if(2*arr[j]==arr[n-1]){
            flag=true;
            index=j;
            break;
        }
    }
    if(flag==true) cout<<"It Can be Partioned"<<" "<<"index:"<<index;
    else cout<<"Not Partioned"<<" "; // rahul

}