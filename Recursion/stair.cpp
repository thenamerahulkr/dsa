#include<bits/stdc++.h>
using namespace std;
int stairs(int n){
    //base case
    if(n==2){
        return 2;
    }
    if(n==1){
        return 1;
    }
    return stairs(n-1)+stairs(n-2);
}
int main()
{
    cout<<stairs(5)<<endl;
    cout<<stairs(6)<<endl;
    cout<<stairs(40);
}