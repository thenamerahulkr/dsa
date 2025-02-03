/*Difference between call by value and call by reference in C++ 
   Call by value
   ->A copy of the value is passed to the function
   ->Changes made inside the function are not 
    reflected on other functions
   ->Actual and formal arguments will be created at 
    different memory location
   Call by reference
   ->An address of value is passed to the function
   ->Changes made inside the function are reflected 
    outside the function as well  
   ->Actual and formal arguments will be created at 
    same memory location. 
*/
// C++ program to illustrate
// call by value
#include <iostream>
using namespace std;

void func(int a, int b)
{
	a += b;
	cout << "In func, a = " << a << " b = " << b << endl;
}
int main(void)
{
	int x = 5, y = 7;

	// Passing parameters
	func(x, y);
	cout << "In main, x = " << x << " y = " << y;
	return 0;
}

// C++ program to illustrate
// call by reference
// #include <iostream.h>
// using namespace std;

// void swapnum(int* i, int* j)
// {
// 	int temp = *i;
// 	*i = *j;
// 	*j = temp;
// }

// int main(void)
// {
// 	int a = 10, b = 20;

// 	// passing parameters
// 	swapnum(&a, &b);

// 	cout << "a is " << a << " and b is " << b;
// 	return 0;
// }



