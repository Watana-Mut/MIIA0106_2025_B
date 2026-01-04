#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

int main()
{
  
  cout << "Sum = " << add(3, 5) << endl;
  
  // add float
  cout << "Sum = " << add(3.5, 5.2) << endl;


	return 1;
}