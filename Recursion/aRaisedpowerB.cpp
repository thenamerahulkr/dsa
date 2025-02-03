#include<bits/stdc++.h>
using namespace std;
int pow2(int x,int n){
    if(n==1){
        return x;
    }  
 
     if(n%2==0){
        int ans=pow(x,n-1);
        return ans*ans;
    }
    else if(n%2!=0){
        int ans=pow(x,n-1);
        return ans*ans*x;
    }
}
int pow(int a,int b){
    if(a==0 and b==0){
        return -100;
    }
    if(b==0){
        return 1;
    }
    return a*pow(a,b-1);
}
int main()
{
    // cout<<pow(0,0);
    cout<<pow2(2,3);
}