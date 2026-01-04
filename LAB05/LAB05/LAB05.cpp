#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Hello, World!" << endl;
	double num = 9.0;
	double result = sqrt(num);

	double powResult = pow(num, 3.0);

	cout << "The square root of " << num << " is " << result << endl;
	cout << num << " raised to the power of 3 is  pow(num, 3.0) = " << powResult << endl;
	cout << num << "9 * 9 * 9 = " << 9 * 9 * 9 << endl;
	


	return 1;
}