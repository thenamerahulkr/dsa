#include<iostream>
#include<vector>
using namespace std;
void change(int a[]){
    a[0]=2;
    cout<<a[0];
}
void change2D(int arr[3][3]){
    arr[0][0]=100;
}
int main(){
//    int a[3]={1,2,3};
   //two array me problem hain;
   int arr[3][3]={1,2,3,4,5,6,7,8,9};
//    change(a);
    cout<<arr[0][0];
    cout<<endl;
    change2D(arr);
    cout<<arr[0][0];


return 0;
}