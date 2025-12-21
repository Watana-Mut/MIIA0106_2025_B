#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

char calculateGrade(double score)
{
    if (score >= 80.0) return 'A';
    if (score >= 70.0) return 'B';
    if (score >= 60.0) return 'C';
    if (score >= 50.0) return 'D';
    return 'F';
}

int main()
{
    const int COUNT = 5;
    string name[COUNT];
    string id[COUNT];
    double score[COUNT];
    char grade[COUNT];

    // Input for 5 students
    for (int i = 0; i < COUNT; ++i) {
        cout << "Student " << (i + 1) << '\n';

        cout << "Enter name: ";
        getline(cin, name[i]);

        cout << "Enter ID: ";
        cin >> id[i];

        cout << "Enter score: ";
        while (!(cin >> score[i])) {
            cerr << "Invalid input. Enter a numeric score: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // calculate grade
        grade[i] = calculateGrade(score[i]);

        // remove leftover newline so next getline works
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << '\n';
    }

    // Display all students
    cout << "-------------------------------------------\n";
    cout << left << setw(20) << "Name" << setw(10) << "ID" << right << setw(10) << "Score" << setw(8) << "Grade" << '\n';
    cout << "-------------------------------------------\n";
    for (int i = 0; i < COUNT; ++i) {
        cout << left << setw(20) << name[i] << setw(10) << id[i]
             << right << setw(10) << fixed << setprecision(2) << score[i]
             << setw(8) << grade[i] << '\n';
    }
    cout << "-------------------------------------------\n";

    return 0;
}