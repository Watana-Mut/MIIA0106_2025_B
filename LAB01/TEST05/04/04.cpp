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
    int size;

    cout << "Enter number of students: ";
    while (!(cin >> size) || size <= 0) {
        cerr << "Please enter a positive integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // consume newline before using getline
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Dynamic arrays
    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    // Input
    for (int i = 0; i < size; ++i) {
        cout << "Student " << (i + 1) << '\n';

        cout << "Enter name: ";
        getline(cin, name[i]);

        cout << "Enter ID: ";
        getline(cin, id[i]);

        cout << "Enter score: ";
        while (!(cin >> score[i])) {
            cerr << "Invalid input. Enter a numeric score: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // calculate grade
        grade[i] = calculateGrade(score[i]);

        // clear newline so next getline works
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << '\n';
    }

    // Output
    cout << left << setw(25) << "Name" << setw(12) << "ID" << right << setw(10) << "Score" << setw(8) << "Grade" << '\n';
    cout << string(55, '-') << '\n';
    for (int i = 0; i < size; ++i) {
        cout << left << setw(25) << name[i] << setw(12) << id[i]
             << right << setw(10) << fixed << setprecision(2) << score[i]
             << setw(8) << grade[i] << '\n';
    }
    cout << string(55, '-') << '\n';

    // Free memory
    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;

    return 0;
}