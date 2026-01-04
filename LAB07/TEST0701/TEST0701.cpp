#include<iostream>
#include<string>
using namespace std;

int main()
{
	int x = 10;
	int y = 20;

	cout << "address of x is " << &x << endl;
	cout << "value of x is " << x << endl;
	cout << "value of y is " << y << endl;

	// pointer 
	int* pt = &x;

	*pt = 100;

	cout << "address of pt is " << &pt << endl;
	cout << "value of pt is " << pt << endl;
	cout << "value of x is " << x << endl;
	cout << "value of y is " << y << endl;

	pt = &y;
	*pt = 500;

	cout << "value of x is " << x << endl;
	cout << "value of y is " << y << endl;

	getchar();
	return 0;
}