#include<iostream>
#include<string>

using namespace std;

int main()
{
	int score1, score2, score3, score4, score5;
	int score6, score7, score8, score9, score10;


	cout << "Enter score 1 scores: ";
	cin >> score1;
	cout << "Enter score 2 scores: ";
	cin >> score2;
	cout << "Enter score 3 scores: ";
	cin >> score3;
	cout << "Enter score 4 scores: ";
	cin >> score4;
	cout << "Enter score 5 scores: ";
	cin >> score5;

	int total = score1 + score2 + score3 + score4 + score5;
	double average = total / 5.0;
	cout << "Here are the scores you entered:" << endl;
	cout << "score 1: " << score1 << endl;
	cout << "score 2: " << score2 << endl;
	cout << "score 3: " << score3 << endl;
	cout << "score 4: " << score4 << endl;
	cout << "score 5: " << score5 << endl;
	cout << "Total score: " << total << endl;
	cout << "Average score: " << average << endl;

	return 0;
}