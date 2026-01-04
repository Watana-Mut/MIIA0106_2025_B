// ให้รับ ชื่อนักศึกษา 
// ให้รับ รหัสนักศึกษา
// ให้รับ คะแนน 
// แสดงผลลัพธ์ ชื่อนักศึกษา รหัสนักศึกษา คะแนน และเกรดให้สร้าง เป็น functioin 

#include <iostream>
#include <string>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
	cout << "Student Name: " << name << endl;
	cout << "Student ID: " << id << endl;
	cout << "Score: " << score << endl;
	cout << "Grade: " << grade << endl;
}

void calculateGrade(double score, char& grade)
{
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';
}

int main()
{
	string name[5];
	string id[5];
	double score[5];
	char grade[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter student name: ";
		getline(cin, name[i]);
		cin.ignore(); // Clear the newline character from the input buffer
		cout << "Enter student ID: ";
		cin >> id[i];
		cin.ignore(); // Clear the newline character from the input buffer
		cout << "Enter score: ";
		cin >> score[i];
		cin.ignore(); // Clear the newline character from the input buffer

		calculateGrade(score[i], grade[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "\nStudent " << (i + 1) << " Information:" << endl;
		displayStudentInfo(name[i], id[i], score[i], grade[i]);
	}
	
	

	return 0;
}