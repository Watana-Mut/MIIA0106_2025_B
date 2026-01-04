#include <iostream>
#include <string>
using namespace std;

int a = 1000;

void swap(int& x, int& y)
{
	int tmp = y;
	y = x;
	x = tmp;


}

void printA()
{
	//int a = 4;
	cout << " a = " << a << endl;
}

int main()
{
	cout << " a = " << a << endl;

	int a = 20;
	int b = 40;

	cout << " a = " << a << endl;
	printA();


	cout << "Before swapping: a = " << a << ", b = " << b << endl;


	int tmp = a;
	a = b;
	b = tmp;

	cout << "After swapping: a = " << a << ", b = " << b << endl;

	swap(a, b);
	cout << "After swapping: a = " << a << ", b = " << b << endl;

	return 1;
}