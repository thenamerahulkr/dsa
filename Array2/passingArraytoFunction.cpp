#include<iostream>
using namespace std;
void display (int *a,int size){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
     }
}
// void display (int arr[],int size){
//      for(int i=0;i<=4;i++){
//         cout<<arr[i]<<" ";
//      }
// }
void change(int b[],int size){
    b[0]=100;
}

int main(){
//   int size=5;
//   int arr[]={1,4,2,7,46};
//   display(arr,size);
//   change(arr,size);
//   display(arr,size);
//     return 0;
int arr[]={1,2,3,4,5};
int *ptr=arr; //giving address 
for(int i=0;i<=5;i++){
    cout<<*ptr<<" ";
}
ptr=arr; //pointer is pointing the first element of array
//for(int i=0;i<=5;i++)
    // cout<<ptr[i]<<" ";
    *ptr=8; //ptr[0]=8
    ptr++; //pointer is pointing 2nd element of array
    *ptr=9;
    ptr--;//pointer is pointing the first element of array
}