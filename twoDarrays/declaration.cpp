#include<iostream>
using namespace std;
int main(){
    // int arr[3][3];
    // arr[0][1]=4; //index of row will be 0->2 ]
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // int arr[3][2]={{1,2},{1,2,3},{2}};// not possible like this
    int arr1[][4]={1,2,3,4,6};
    int arr2[4][4]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7};
    for(int i=0;i<=2;i++){
        cout<<arr[0][i]<<" ";
    }
    for(int i=0;i<=2;i++){
        cout<<arr[1][i]<<" ";
    }
    for(int i=0;i<=2;i++){
        cout<<arr[2][i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    
}
