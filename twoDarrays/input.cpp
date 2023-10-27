#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows:"<<endl;
    cin>>m;
    int n;
    cout<<"Enter the no of cols:"<<endl;
    cin>>n;
    int array[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>array[i][j];
        }
    }
    //print 
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<array[i][j];
        }
        cout<<endl;
    }
}