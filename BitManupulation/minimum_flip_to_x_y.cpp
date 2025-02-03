#include<bits/stdc++.h>
using namespace std;
int mini(int x,int y){
    int temp=x^y;
    return __builtin_popcount(temp);
}
int main()
{
    int x=23;
    int y=31;
    int result=mini(x,y);
    cout<<result<<" "<<'\n';   
}