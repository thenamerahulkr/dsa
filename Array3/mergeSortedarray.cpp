#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> merge(vector<int>& arr1, vector<int>& arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int> v(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n&&i<=m){
        if(arr1[i]<arr2[j]){
            v[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr1[i]>arr2[j]){
            v[k]=arr1[i];
            j++;
            k++;
        }
        // for remaining elements
        if(i==n){
            while(j<=m-1){
                v[k]=arr2[j];
                k++;
                j++;
            }
        }
        else if(j==m){
            while (i<=n-1){
                v[k]=arr1[i];
                i++;
                k++;
            }
        }
    }
    return v;
}

int main(){
    
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    vector<int> v= merge(arr2,arr1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}