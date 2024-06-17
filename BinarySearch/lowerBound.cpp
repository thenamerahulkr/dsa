#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 5, 9, 15, 18, 21, 243};
    int n = 9;
    int x=20;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>=x){
    //         cout<<arr[i-1];
    //         break;
    //     }
    // }

    //binary search =>O(logn)
    int lo=0;
    int hi=9;
    bool flag = false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            cout<<arr[mid-1];
            flag=true;
            break;
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    if(flag==false){
        cout<<arr[hi]<<endl;
    }

}