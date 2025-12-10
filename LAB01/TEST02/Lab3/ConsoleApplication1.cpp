#include <iostream>
#include <string>

using namespace std;
int main()
{	string StudentID ;
	string Realname ;
	string Surname;
	int price;
	double qty;
	double area;

	cout << "Real name : ";
	cin >> Realname;
	cout << "Sur name : ";
	cin >> Surname;
	cout << "ID : ";
	cin >> StudentID;
	cout << "price : ";
	cin >> price ;
	cout << "qty : ";
	cin >> qty;
	area = price * qty;

	cout << "-----------------" << endl;
	cout << "Name : " << Realname << " " << Surname << endl;
	cout << "ID : " << StudentID << endl;
	cout << "Price : " << price << endl;
	cout << "Qty : " << qty << " item" << endl;
	cout << "Total price : " << area << endl;

	return 0;
}