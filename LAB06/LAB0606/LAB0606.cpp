// ให้รับคะแนน 3  วิชา math,c,eng จำนวน 5 คน
// math[5]
// c[5]
// eng[5]
// student[5][3]

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int math[5], c[5], eng[5];
	
	for (int i = 0; i < 5; i++)
	{
		cout << "enter math score for student " << (i + 1) << ": ";
		cin >> math[i];
		cout << "enter c score for student " << (i + 1) << ": ";
		cin >> c[i];
		cout << "enter eng score for student " << (i + 1) << ": ";
		cin >> eng[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "\nScores for student " << (i + 1) << ":\n";
		cout << "Math: " << math[i] << endl;
		cout << "C: " << c[i] << endl;
		cout << "Eng: " << eng[i] << endl;
	}


	return 0;
}