#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum=INT_MIN;
    // int idx=-1;
    // for(int i = 1 ;i <= n-k ; i++){
    //     int sum=0;
    //     for(int j = i ; j<=i+k-1 ; j++){
    //         sum+=arr[j];
    //     }
    //     if(maxSum<sum){
    //         maxSum=sum;
    //         idx=i;
    //     }
    // }
    // cout<<"maximum sum of window is : ["<<maxSum<<"] : and time complexity is O(n*n)"<<'\n';



    //SLIDING WINDOW TECHNIQUE
    int prevSum=accumulate(arr,arr+3,0);
    int i=1;
    int j=k;
    while(j<n){
        int currentSum=prevSum+arr[j]-arr[i-1];
        i++;
        j++;
        maxSum=max(maxSum,currentSum);
        prevSum=currentSum;
    }
    cout<<"maximum sum of window is : "<<maxSum;
   
}