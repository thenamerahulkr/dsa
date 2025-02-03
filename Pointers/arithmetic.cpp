#include<iostream>
using namespace std;
int main(){
   int x=7;
   int *p1=&x;
   cout<<p1<<endl;
   //jis type ka pointer hoga utna byte aage badh jayega,ex:-agar int type ka hai to 4 byte aage badhega with hexa decimal values
   p1=p1+1;
   cout<<p1;
    return 0;
}