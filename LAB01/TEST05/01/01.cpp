#include <iostream>
#include <string>
#include <iomanip>

using namespace std;    

char calculateGrade(double score)
{
    if (score >= 80.0) return 'A';
    if (score >= 70.0) return 'B';
    if (score >= 60.0) return 'C';
    if (score >= 50.0) return 'D';
    return 'F';
}

void displayStudentInfo(const string &name, const string &id, double score, char grade)
{
    cout << "\nStudent information:\n";
    cout << "Name : " << name << '\n';
    cout << "ID   : " << id << '\n';
    cout << "Score: " << fixed << setprecision(2) << score << '\n';
    cout << "Grade: " << grade << '\n';
}

int main()
{
    string name, id;
    double score;
    char grade;

    // รับชื่อ (getline)
    cout << "Enter name: ";
    getline(cin, name);

    // รับรหัสและคะแนน (cin)
    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter score: ";
    if (!(cin >> score)) {
        cerr << "Invalid score input.\n";
        return 1;
    }

    // calculateGrade(score, grade);
    grade = calculateGrade(score);

    // displayStudentInfo(name, id, score, grade);
    displayStudentInfo(name, id, score, grade);

    return 0;
}

