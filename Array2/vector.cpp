#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;// you need not to mention the size of vector
     //inserting / input do not use []
     v.push_back(2);
     cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
     v.push_back(7);
     cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
    //  v[1]=1; do not use like this 
     v.push_back(9);
     cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
     v.push_back(4);
     cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
     v.push_back(3);
     cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
     v.push_back(1);
     cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
     //if you want to update / access
    //  cout<<v[0]<<" ";
    //  cout<<v[1]<<" ";
    //  cout<<v[2]<<" ";
    //  cout<<v[3]<<" ";
    //  cout<<v[4]<<" ";
    //  cout<<v[5]<<" ";
    //  cout<<v[6]<<" ";


}