#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void display(int arr[],int size,int index){
    if(index==size){
        return;
    }
    cout<<arr[index]<<" ";
    display(arr,size,index+1);
}
void displayVec(vector<int> &v,int index){
    int size=v.size();
    if(index==size){
        return;
    }
    cout<<v[index]<<" ";
    displayVec(v,index+1);
}
void printMax(int arr[],int size,int index,int max){
    if(index==size){
        cout<<max;
        return;
    }
    if(arr[index]>max){
        max=arr[index];
    }
    printMax(arr,size,index+1,max);
}
int maxInArray(int arr[],int size,int index){
    if(index==size){
        return -1;
    }
    return max(arr[index],maxInArray(arr,size,index+1));
}
int main(){
    int arr[]{1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    // display(arr,size,0);
    vector<int> v(size);
    for(int i=0;i<size;i++){
        v[i]=arr[i];
    }
    // displayVec(v,0);
    printMax(arr,size,0,-1);
    
}