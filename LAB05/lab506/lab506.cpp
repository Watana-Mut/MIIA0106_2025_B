#include <iostream>
#include <string>

using namespace std;

int Fun_factorial(int n)
{
	int factorial = 1; // reset factorial
	for (int i = 2; i <= n; i++)
	{
		factorial = factorial * i;
	}

	return factorial;
}

int fun_factorial_recursive(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * fun_factorial_recursive(n - 1);
	}
}

int main()
{
	// fatory pattern
	// 3! = 3 x 2 x 1 = 6
	// 4! = 4 x 3 x 2 x 1 = 24
	// 5! = 5 x 4 x 3 x 2 x 1 = 120

	int n = 6;
	int factorial = 1;
	// 5!
	//
	// factorial = factorial * 2 * 3 * 4 * 5 * 6;

	factorial = factorial * 2;
	factorial = factorial * 3;
	factorial = factorial * 4;
	factorial = factorial * 5;
	factorial = factorial * 6;

	cout << n << "! = " << factorial << endl;

	//factorial = 1; // reset factorial
	//for (int i = 2; i <= n; i++)
	//{
	//	factorial = factorial * i;
	//}

	//cout << n << "! = " << factorial << endl;

	factorial = fun_factorial_recursive(n);
	cout << n << "! = " << factorial << endl;


	return 0;
}