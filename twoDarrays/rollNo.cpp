#include<iostream>
using namespace std;
int main(){
    int arr[4][2];
    // for(int i=0;i<=1;i++){
    //      for(int j=0;j<=3;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    //  for(int i=0;i<=1;i++){
    //      for(int j=0;j<=3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<=3;i++){
         for(int j=0;j<=1;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<=3;i++){
         for(int j=0;j<=1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}    