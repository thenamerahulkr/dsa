#include<iostream>
using namespace std;
int areaCircle(int radius){
    return 2*3.14*radius;
}
int main(){
    int radius;
    cout<<"Enter the radius of circle : ";
    cin>>radius;
    int area = areaCircle(radius);
    cout<<"The Area of the circle is : "<<area;
    return 0;
}