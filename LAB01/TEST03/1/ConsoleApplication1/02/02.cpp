#include <iostream>
#include <string>
using namespace std;

int findMax(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}
int findMin(int a, int b, int c)
{
	if (a <= b && a <= c)
		return a;
	else if (b <= a && b <= c)
		return b;
	else
		return c;
}
int main()
{
	int a , b , c;
	int max;
	int min;
	cout << "Enter a integers: ";
	cin >> a;
	cout << "Enter b integers: ";
	cin >> b;
	cout << "Enter c integers: ";
	cin >> c;

	max = findMax(a, b, c);
	cout << "Max value is: " << max << endl;
	min = findMin(a, b, c);
	cout << "Min value is: " << min << endl;


	return 1;
}