#include <iostream>
#include <string>

using namespace std;

int main()
{
	//int score[5];
	int num = 5;
	//int score[num]; // ไม่ได้ 
	int score[5];


	int total = 0;
	double avg = 0.0;

	
		cout << "Enter score " << (1) << ": ";
		cin >> score[0];

		cout << "Enter score " << (2) << ": ";
		cin >> score[1];

		cout << "Enter score " << (3) << ": ";
		cin >> score[2];

		cout << "Enter score " << (4) << ": ";
		cin >> score[3];

		cout << "Enter score " << (5) << ": ";
		cin >> score[4];

		total = score[0] + score[1] + score[2] + score[3] + score[4];
		avg = total / 5.0;

		cout << "Here are the scores you entered:" << endl;
		cout << "score 1: " << score[0] << endl;
		cout << "score 2: " << score[1] << endl;
		cout << "score 3: " << score[2] << endl;
		cout << "score 4: " << score[3] << endl;
		cout << "score 5: " << score[4] << endl;
		cout << "Total score: " << total << endl;
		cout << "Average score: " << avg << endl;
	return 0;
}