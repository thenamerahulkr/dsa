#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x){
    int ans=-1;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            ans=mid;
            break;
        }
        else if(arr[mid]>x){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    if(ans==-1){
        cout<<"Element is not present";
    }
    return ans;
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;
    cout<<search(arr,n,x);
}