#include<iostream>
using namespace std;
int main(){
   string arr[] = {"0123","0023","456","00182","940","3000"};
   int max =stoi(arr[0]);
   string s = arr[0];
   for(int i=1;i<=5;i++){
    int x = stoi(arr[i]);
    if(x>max){
        max = x;
        s = arr[i];
    }
   }
   cout<<max<<endl<<s;

}