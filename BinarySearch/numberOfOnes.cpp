#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=1;

    //binary search =>O(logn)
    int lo=0;
    int hi=n-1;
    int ans=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]==x){
                hi=mid-1;
            }
            else{
                ans=mid;
                break;
            }
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    int final=(n)-ans;
    cout<<final<<endl;
}