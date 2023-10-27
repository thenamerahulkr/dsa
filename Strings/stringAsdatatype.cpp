
#include<iostream>
using namespace std;
int main(){
//    string str="rahul";
//    cout<<str[0];
   //taking input as string without space
   string str2;
   // taking string input without space
//    cin>>str2;
//    cout<<str2;
   // taking input as string with space
   getline(cin,str2);
//    cout<<str2;
   for(int i=0;str2[i]!='\0';i++){
     if(i%2==0){
        str2[i]='a';
     }
   }
   cout<<str2;
}