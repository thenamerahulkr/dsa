#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array";
    for(int i=0;i<=size-1;i++){
            cin>>arr[i];
        }
    int target;
    cout<<"Enter the target";
    cin>>target;
    for (int i=0;i<=size-1;i++){
        if(arr[i]==target){
            cout<<"present";
        }
    }
        
    }