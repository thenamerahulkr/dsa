#include <bits/stdc++.h>
using namespace std;
int lastOccurence(int arr[],int n,int target){
    //binary search =>O(logn)
    int lo=0;
    int hi=n-1;
    bool flag=false;
    int index;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid+1]==target){
                lo=mid+1;
            }
            else{
                index=mid;
                flag=true;
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
    if(flag==false){
        cout<<"Element is not present in array"<<endl;
    }
    return index;
}
int main()
{
    int arr[] = {1, 3, 2, 2 ,2 ,2, 4, 5, 9, 15, 18, 21, 243};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=2;
    cout<<lastOccurence(arr,n,x);
}