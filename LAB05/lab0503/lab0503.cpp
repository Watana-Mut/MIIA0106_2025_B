#include <iostream>
#include <string>
#include <cmath>

using namespace std;


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

void fun(int j)
{
	cout << "This is Function " << j << endl;
	for (int i = 1; i <= 12; i++)
	{
		cout << i << " x " << j << " = " << (i * j) << endl;
	}
}

int add(int a, int b)
{
	return a + b;
}

int addv1(int a, int b)
{
	string msg = "Adding two integers";
	int result = 0;
	result = a + b;

	// return msg; // error return type string not int
	return result;

}

double pow1(double base, double exponent)
{
	// 9^3  9 คือ base  3 คือ exponent
	double result = 1.0;
	for (int i = 1; i <= exponent; i++)
	{
		result = result * base;
	}
	return result;
	
}

int main()
{
	/*Fun3();
	Fun4();
	Fun5();*/
	int j = 3;
	int k = 9;
	/*fun(j);
	j = 4;
	fun(j);
	j = 5;

	fun(k);*/

	int result = 0;

	result = j + k;
	cout << "The result of " << j << " + " << k << " = " << result << endl;

	result = add(j, k);
	cout << "The result of " << j << " + " << k << " = " << result << endl;

	result = addv1(j, k);
	cout << "The result of " << j << " + " << k << " = " << result << endl;

	// show power
	double num = 9.0;
	double powResult = pow(num, 3.0);
	cout << num << " raised to the power of 3 is  pow(num, 3.0) = " << powResult << endl;

	powResult = pow1(num, 3.0);
	cout << num << " raised to the power of 3 is  pow(num, 3.0) = " << powResult << endl;



	return 1;
}