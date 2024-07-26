#include<bits/stdc++.h>
using namespace std;
int find_max_power_of_two(int n){
    n=n | (n>>1);
    n=n | (n>>2);
    n=n | (n>>4);
    n=n | (n>>8);
    n=n | (n>>16);
    return (n+1)/2;
}
int main()
{
    int num=24;
    int result=find_max_power_of_two(num);
    int temp;
    while(num>0){
        temp=num;
        num=(num & (num-1));
    }
    cout<<"power just greater than x is "<<2*temp<<'\n';
    cout<<result;
}