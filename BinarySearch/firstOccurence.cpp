#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 3, 2, 2 ,2 ,2, 4, 5, 9, 15, 18, 21, 243};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=2;

    //binary search =>O(logn)
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]==x){
                hi=mid-1;
            }
            else{
                cout<<mid<<endl;
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
}