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
    cout<<endl;
    //printing the matrix
    for(int i=0;i<=row-1;i++){
        for(int j=0;j<=col-1;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    //printing the transpose of matrix or column wise printing 
    // for(int k=0;k<col;k++){
    //     for(int l=0;l<row;l++){
    //         cout<<matrix[l][k]<<" ";
    //     }
    //     cout<<endl;
    // }
    //store in new matrix
    int t[col][row];
     for(int i=0;i<=row-1;i++){
        for(int j=0;j<=col-1;j++){
           t[i][j]=matrix[j][i];
        }
        cout<<endl;
    }
    for(int k=0;k<=col-1;k++){
        for(int l=0;l<=row-1;l++){
            cout<<t[k][l]<<" ";
        }
        cout<<endl;
    }



    

}