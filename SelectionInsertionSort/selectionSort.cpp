#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    // selection sort
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int index=-1;
        // this is loop for finding min element from search space
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }

}
