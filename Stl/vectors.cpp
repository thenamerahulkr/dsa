#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v){
    for(auto it:v){
        cout<<(it)<<'\n';
    }
}
void printPair(vector<pair<int,int>> &v){
    for(int i =0 ;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<'\n';
    }
}
int main()
{
    // initializing vector
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
        // =>O(1); push back complexity
    //     v.push_back(x);     
    // }
    // cout<<v.size();

    // copying vector
    // vector<int> &v2=v; //O(n)
    // v2.push_back(7);
    // printVec(v);
    // printVec(v2);

    // vector of pair
    vector<pair<int,int>> v3={{1,2},{3,4}};
    printPair(v3);
}