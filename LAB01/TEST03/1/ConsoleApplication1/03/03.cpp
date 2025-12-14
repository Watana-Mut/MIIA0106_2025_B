#include <iostream>
#include <string>
using namespace std;

void swapValues(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
	cout << "After swapping: " << endl;
	cout << "a = " << x << "b = " << y << endl;
}
void swapRef(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
	cout << "After swapping: " << endl;
	cout << "a = " << x << " b = " << y << endl;
}
int main() 
{
	int a, b;
	cout << "Enter a integers: ";
	cin >> a;
	cout << "Enter b integers: ";
	cin >> b;
	
	swapValues(a, b);
	cout << "Before swapping: " << endl;
	cout << "a = " << a << " b = " << b << endl;
	swapRef(a, b);
	cout << "Before swapping: " << endl;
	cout << "a = " << a << " b = " << b << endl;


	
	return 1;
}
