#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // string str="rahulk";
    // cout<<str.substr(4);
    // cout<<endl;
    // cout<<str.substr(1,3);
    string str1;
    cout<<"enter the string";
    getline(cin,str1);
    int n=str1.length();
    cout<<str1.substr(n/2);
     // Take any string
    string s1 = "Geeks";
 
    // Copy two characters of s1 (starting
    // from position 3)
    string r = s1.substr(3, 2);
 
    // prints the result
    cout << "String is: " << r;
 
    
    
}