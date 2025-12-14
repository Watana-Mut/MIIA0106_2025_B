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
	char cont;
	do {
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

		cout << "Do you want to continue? (y/n): ";
		cin >> cont;
	} while (cont == 'y' || cont == 'Y');

	return 1;
}
