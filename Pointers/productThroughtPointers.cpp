#include<iostream>
using namespace std;
void product(int* p , int* q){
    int result = *p * *q;
    cout<<result;
}
int main(){
   int a=4,b=5;
   product(&a,&b);
}