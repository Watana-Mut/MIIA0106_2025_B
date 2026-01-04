#include <iostream>
#include <string>

using namespace std;

void greetUser(string name ,string name2)
{
	cout << "Hello, " << name << "! You are " << endl;
	cout << "Your name entered again is: " << name2 << endl;
}

void byref(int& x, int& y)
{
	int temp = x;
	x = y + 10;
	y = temp - 10;
}

int byval(int x, int y)
{
	int temp = x;
	x = y + 10;
	y = temp - 10;

	return x, y;
}


int main()
{
	string name;
	string name2;
	int age = 0;

	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Enter your name again: ";
	cin >> name2;

	greetUser(name, name2);

	int x = 10;
	int y = 10;

	cout << "Before byref function: x = " << x << ", y = " << y << endl;
	byref(x, y);
	cout << "After byref function: x = " << x << ", y = " << y << endl;

	x, y = byval(x, y);
	cout << "After byref function: x = " << x << ", y = " << y << endl;
	



	return 0;
}