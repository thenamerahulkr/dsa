#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// reverse from index 1 to index 3
void reversePartOfArray(vector<int>& v,int a,int b){
    for(int i=a,j=b-1;i<j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void rotateArray(vector<int>& v, int k){
    int n =v.size();
    reversePartOfArray(v,0,n-k);
    reversePartOfArray(v,n-k,n-1);
    reverse(v.begin(),v.end());
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(8);
    display(arr);
    cout<<endl;
    rotateArray(arr,2);
    display(arr);
  
}