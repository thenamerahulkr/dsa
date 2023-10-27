#include<iostream>
#include<climits>
using namespace std;
int main(){
   int m;
   cout<<"enter row";
   cin>>m;
   int n;
   cout<<"enter cols";
   cin>>n;
   int array[m][n];
   for(int i=0;i<=m-1;i++){
    for(int j=0;j<=n-1;j++){
        cin>>array[i][j];
    }
   }
   int max=INT_MIN;
   for(int i=0;i<=m-1;i++){
    for(int j=0;j<=n-1;j++){
        if(array[i][j]>max){
            max=array[i][j];
        }
    }
   }
   cout<<max;
}  