#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0,1,2,4,5,6,7,9};
    int n = 8;
    // O(n);
    for(int i=0;i<n;i++){
        if(arr[i]!=i){
            cout<<i<<endl;
            break;
        }
    }
    // O(logn)
    int low=0;
    int high=n-1;
    int ans;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==mid){
            low=mid+low;
        }
        else{
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans<<endl;
    

}