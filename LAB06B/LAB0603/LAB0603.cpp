#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    const int N = 3; // students
    const int M = 4; // subjects

    string name[N], id[N];
    double score[N][M];
    //double score1[N], score2[N], score3[N], score4[N];
    double total[N];
    char grade[N];

    // TODO: วนรับ name/id
    for (int i = 0; i < N; i++)
    {
		// i บ่งบอกว่า เป็นคนที่เท่าไร
		cout << "----------------------\n";
        cout << "Enter student name:";
		getline(cin >> ws, name[i]);
		cout << "Enter student ID:";
		cin >> id[i];
        // TODO: nested loop รับคะแนน M วิชา + รวม total[i]
		total[i] = 0.0;
        for (int j = 0; j < M; j++)
		{ 
            // j คือ วิชาที่เท่าไร
			cout << "Enter score for subject " << (j + 1) << ": ";
			cin >> score[i][j]; // คนที่เท่าไร และวิชาที่เท่าไร

			total[i] += score[i][j];

        }
        // TODO: calculateGrade(total[i], grade[i]);
		calculateGrade(total[i]/4, grade[i]);
    }
    // TODO: แสดงผลโดยใช้ displayStudentInfo(name[i], id[i], total[i], grade[i]);
    for (int i = 0; i < N; i++)
    {
		cout << "----------------------\n";
		displayStudentInfo(name[i], id[i], total[i], grade[i]);

    }

    return 0;
}
