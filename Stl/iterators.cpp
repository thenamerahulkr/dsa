#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<int>:: iterator it = v.begin();
    // cout<<(*it);
    for(it=v.begin();it!=v.end();++it){
        cout<<(*it)<<endl;
    }
    vector<pair<int,int>> v3={{1,2},{3,4}};
    vector<pair<int,int>>:: iterator t;
    for(t=v3.begin();t!=v3.end();++t){
        cout<< (*t).first;
    }
    // (*it).first ==> it->first

}