#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void reverseArray(vector<int> &v){
//     int i=0;
//     int j=v.size()-1;
//     while(i<j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
// }
void reverseArray(vector<int>& v){
    for(int i=0,j=v.size()-1;i<j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
// reverse from index 1 to index 3
void reversePartOfArray(vector<int>& v){
    for(int i=1,j=v.size()-2;i<j;i++,j--){
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
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    // reverse(arr.begin(),arr.end());
    display(arr);
    cout<<endl;
    reversePartOfArray(arr);
    display(arr);
    // reverseArray(arr);
    // display(arr);
}