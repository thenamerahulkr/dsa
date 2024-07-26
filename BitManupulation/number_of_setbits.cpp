#include<bits/stdc++.h>
using namespace std;
// int number_of_set_bits(int num){
//     return __builtin_popcount(num);
// }
int number_of_set_bits(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n & (n-1));
    }
    return count;
}
int main()
{
    // cout<<number_of_set_bits(13)<<" "<<'\n';
    cout<<"number of set bits "<<number_of_set_bits(16);

}