#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,4,5,6,7};
    int n = 8;
    int lo=0;
    int hi=n;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid+1){
            lo=mid+1;
        }
        else{
            if(arr[mid]==mid){
                if(arr[mid-1]==arr[mid]){
                    cout<<arr[mid]<<endl;
                    break;
                }
                else{
                    hi=mid-1;
                }
            }
        }
    }
}