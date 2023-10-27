#include<iostream>
#include<climits>
using namespace std;
int main(){
    int row;
    cout<<"enter the no of rows: ";
    cin>>row;
    int col;
    cout<<"Enter the no of cols ;";
    cin>>col;
    int matrix[row][col];
    cout<<"Enter the elements of matrix ;";
    for(int i=0;i<=row-1;i++){
        for(int j=0;j<=col-1;j++){
            cin>>matrix[i][j];
        }
    }
    int max=INT_MIN;
     for(int i=0;i<=row-1;i++){
        for(int j=0;j<=col-1;j++){
           if(matrix[i][j]>max){
            max=matrix[i][j];
           }
        }
        cout<<endl;
    }
    cout<<max;

}