#include <iostream>
#include <string>

using namespace std;

void cout_Hello()
{
	cout << "Hello, World!" << endl;
	cout << "Hello, World!" << endl;
	cout << "Hello, World!" << endl;
	cout << "Hello, World!" << endl;
	cout << "Hello, World!" << endl;
	cout << "Hello, World!" << endl;
	cout << "Hello, World!" << endl;
}


void greetUser()
{
	cout_Hello();
	cout << "My name is sutit ongart" << endl;
	cout << " welcome to c++ programming class" << endl;
	//return void();
}

void Fun3()
{
	cout << "This is Function 3" << endl;
	for (int i = 1; i <= 12; i++)
	{
		cout << i << " x 3 = " << (i * 3) << endl;
	}
}

void Fun4()
{
	cout << "This is Function 4" << endl;
	for (int i = 1; i <= 12; i++)
	{
		cout << i << " x 4 = " << (i * 4) << endl;
	}
}


void Fun5()
{
	cout << "This is Function 5" << endl;
	for (int i = 1; i <= 12; i++)
	{
		cout << i << " x 5 = " << (i * 5) << endl;
	}
}

int main()
{

	greetUser();
	Fun3();
	Fun4();
	Fun5();


	return 1;
}