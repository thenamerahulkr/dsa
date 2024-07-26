#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=24;
    int temp;
    while(num!=0){
        temp=num;
        num=(num & (num-1));
    }
    cout<<"power just smaller than x is "<<temp<<'\n';
}