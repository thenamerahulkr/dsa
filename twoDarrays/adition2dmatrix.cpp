#include<iostream>
using namespace std;
int main(){
    int arr1[2][3]={1,2,3,4,5,6};
    int arr2[2][3]={1,2,3,5,7,8};
    int sum[2][3];
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
        
    }
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
           cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}