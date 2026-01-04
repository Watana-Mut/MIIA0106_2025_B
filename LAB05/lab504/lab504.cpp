#include <iostream>
#include <string>
using namespace std;

// value parameter example
// ส่งค่าให้
int  chageValue(int z)
{
	z = 100;
	
	cout << "Value inside changeValue function: " << z << endl;
	return z;
}
// reference parameter example
// ส่งที่อยู่ให้
void chageValueRef(int& z)
{
	z = 200;
	cout << "Value inside changeValueRef function: " << z << endl;
}

int main()
{
	int a = 10;
	

	cout << "Value of a: " << a << endl;

	chageValue(a); 
	cout << "Value of a after changeValue function call: " << a << endl;

	chageValueRef(a);
	cout << "Value of a after changeValueRef function call: " << a << endl;



	return 0;
}