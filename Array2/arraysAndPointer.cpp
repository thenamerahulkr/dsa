#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,3,4,5,6};
//    int *ptr1=arr; 
//    or 
    int *ptr1=&arr[0];
   cout<<ptr1<<endl;
   ptr1[0]=5;
   for(int i=0;i<=5;i++){
    cout<<ptr1[i];
   }


    return 0;
}