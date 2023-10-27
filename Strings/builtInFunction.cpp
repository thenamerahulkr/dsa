#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   string str="rahul";
   cout<<str.size();
   //or 
   cout<<str.length();
   cout<<endl;
   //push back &pop back
   str.push_back('k');
   cout<<str<<endl;
   str.pop_back();
   cout<<str<<endl;
   string s="rahul";
//    string k="kumar";
//    s=s+k;
//    cout<<s;
    //   reverse(s.begin(),s.end());
    //   reverse(s.begin()+2,s.end()-1);
      reverse(s.begin()+2,s.begin()+5);
      cout<<s;
}