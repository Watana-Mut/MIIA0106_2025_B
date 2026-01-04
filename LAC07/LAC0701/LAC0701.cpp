#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	// add of a &
	cout << "address of a " << &a << endl;
	cout << "value of a " << a << endl;

	// pointer 
	// จะเก็บ address ของ ตัวแปรอื่นๆ 
	cout << "value of b " << b << endl;

	int* pt = &a;

	pt = &b;
	*pt = 30;
	cout << " address of b " << &b << endl;
	cout << " value of pt " << pt << endl;
	cout << " value of pt ref  " << *pt << endl;
	cout << "value of b " << b << endl;


	return 0;
}