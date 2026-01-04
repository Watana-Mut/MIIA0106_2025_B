// string name[จำนวนชัดเจน] string name[20];
// 2 มิติ  array name[จำนวนชัดเจน][จำนวนชัดเจน] string name[5][3];
// // แต่ถ้าจำนวนไม่ชัดเจน จะทำอย่างไร 
// // ใช้ pointer + dynamic memory allocation
// string* name = new string[numNames];

// string name[3]
// string name[3][4]
// string * name = new string[numNames]; // สามารถเป็นตัวแปรกำหนดจำนวนได้

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int numStudents = 1;

	cout << "Enter number of students: ";
	cin >> numStudents;

	//int scores[i]; ไม่ได้
	// แก้ได้ โดยใช้ dynamic memory allocation 
	// pointer
	int* scores = new int[numStudents];

	for (int i = 0; i < numStudents; i++)
	{
		cout << "Enter score for student " << (i + 1) << ": ";
		cin >> scores[i];
	}

	cout << "\nHere are the scores you entered:\n";
	for (int i = 0; i < numStudents; i++)
	{
		cout << "Score for student " << (i + 1) << ": " << scores[i] << endl;
	}



	return 0;
}