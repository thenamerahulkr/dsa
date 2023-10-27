#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);//giving size to the vector
    // vector<int>v(5,7); // size will be 5 and each element is filled with 7; iska ye matlab hota hai
    cout<<v.size();
}