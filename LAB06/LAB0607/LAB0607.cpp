// ให้รับคะแนน 3  วิชา math,c,eng จำนวน 5 คน
// math[5]
// c[5]
// eng[5]
// student[5][3]
// student[5][0] = math
// student[5][1] = C
// student[5][2] = eng

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int student[5][3];

	for (int i = 0; i < 5; i++)
	{
		cout << "enter math score for student " << (i + 1) << ": ";
		cin >> student[i][0];
		cout << "enter c score for student " << (i + 1) << ": ";
		cin >> student[i][1];
		cout << "enter eng score for student " << (i + 1) << ": ";
		cin >> student[i][2];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "\nScores for student " << (i + 1) << ":\n";
		cout << "Math: " << student[i][0] << endl;
		cout << "C: " << student[i][1] << endl;
		cout << "Eng: " << student[i][2] << endl;

	}


	return 0;
}