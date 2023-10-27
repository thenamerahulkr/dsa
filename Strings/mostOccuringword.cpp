// C++ program to count words in 
// a string using stringstream.
#include <iostream>
#include <sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string str = "rahul rahul is a good boy";
    stringstream ss(str);
    string temp; 
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    // print the vector
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" "<<endl;
    // }
    // sort this vector
    sort(v.begin(),v.end());
    int maxCount = 1;
    int count = 1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count =1;
        }
        maxCount = max(maxCount,count);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count =1;
        }
        if(count==maxCount){
            cout<<v[i]<<":"<<maxCount<<endl;
        }
    }
	return 0;
}