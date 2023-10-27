#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the target";
    cin>>x;
    vector<int>v;
    int size;
    cout<<"Enter the size of vector";
    cin>>size;
    cout<<"Enter the array elements";
    for(int i=0;i<size;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}