#include <bits/stdc++.h>
using namespace std;
int countOnes(int arr[],int n,int target){
    //binary search =>O(logn)
    int lo=0;
    int hi=n-1;
    int index;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid+1]==target){
                lo=mid+1;
            }
            else{
                index=mid;
                break;
            }
        }
        else if(arr[mid]>target){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return n-index-1;
}
int main()
{
    int arr[] = {0,0,0,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=0;
    cout<<countOnes(arr,n,x);
}