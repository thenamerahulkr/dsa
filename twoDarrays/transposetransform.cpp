#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows:"<<endl;
    cin>>m;
   
    int array[m][m];
    cout<<"enter the elements";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    //print 
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m-1;j++){
            int temp=array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=temp;
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
     
}