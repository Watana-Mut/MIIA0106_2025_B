#include <iostream>
#include <string>
using namespace std;   

double calculateArea(double radius)
{
	return 3.14159 * radius * radius;
}
double calculateArea(double width, double height)
{
	return width * height;
}
int main()
{
	double radius;
	double result;

	cout << "Enter the radius : ";
	cin >> radius;
	
	//result = 3.14159 * radius * radius;
	//cout << "The area of the circle is : " << result << endl;

	result = calculateArea(radius);
	cout << "The area of the circle using function is : " << result << endl;

	double width, height;
	cout << "Enter width : ";
	cin >> width;
	cout << "Enter height : ";
	cin >> height;
	
	result = calculateArea(width, height);
	cout << "The area of the rectangle using function is : " << result << endl;

	return 1;
}