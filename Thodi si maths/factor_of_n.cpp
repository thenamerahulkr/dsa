#include<bits/stdc++.h>
using namespace std;
void printFactor(int n){
    for(int i =1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
void printFactor2(int n){
    for(int i =1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" "<<n/i<<" ";
        }
    }
}
int main()
{ 
    // printFactor(60);
    cout<<endl;
    printFactor2(60);
    
}