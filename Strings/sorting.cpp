#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  // string str="rahul";
  // sort(str.begin(),str.end());
  // cout<<str;
  string str1;
  getline(cin, str1);
  sort(str1.begin(), str1.end());
  // cout<<str1<<" "<<endl;
  for (int i = 0; i < str1[i] != '\0'; i++)
  {
    cout << str1[i] << " ";
  }
}