#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

char calculateGrade(double total, int subjects)
{
    double average = total / subjects;
    if (average >= 80.0) return 'A';
    if (average >= 70.0) return 'B';
    if (average >= 60.0) return 'C';
    if (average >= 50.0) return 'D';
    return 'F';
}

int main()
{
    const int N = 3; // students
    const int M = 4; // subjects

    string name[N];
    string id[N];
    double score[N][M];
    double total[N] = { 0.0 };
    char grade[N];

    // Input
    for (int i = 0; i < N; ++i) {
        cout << "Student " << (i + 1) << '\n';

        cout << "Enter name: ";
        getline(cin >> ws, name[i]); // consume any leftover newline

        cout << "Enter ID: ";
        cin >> id[i];

        total[i] = 0.0;
        for (int j = 0; j < M; ++j) {
            cout << "Enter score for subject " << (j + 1) << ": ";
            while (!(cin >> score[i][j])) {
                cerr << "Invalid input. Enter a numeric score: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            total[i] += score[i][j];
        }

        // compute grade using calculateGrade(total, subjects)
        grade[i] = calculateGrade(total[i], M);

        // clear newline before next getline
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << '\n';
    }

    // Output
    cout << left << setw(20) << "Name" << setw(12) << "ID" << right << setw(12) << "Total" << setw(8) << "Grade" << '\n';
    cout << string(52, '-') << '\n';
    for (int i = 0; i < N; ++i) {
        cout << left << setw(20) << name[i] << setw(12) << id[i]
             << right << setw(12) << fixed << setprecision(2) << total[i]
             << setw(8) << grade[i] << '\n';
    }

    return 0;
}