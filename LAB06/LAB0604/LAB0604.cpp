#include <iostream>
#include <string>

using namespace std;

int main()
{
	int score[5];
	int total = 0;
	double avg = 0.0;


	for (int i = 0; 
		i < 5; 
		i++)
	{
		cout << "Enter score " << (i+1) << ": ";
		cin >> score[i];
		total += score[i];
	}
	
	avg = total / 5.0;

	cout << "Here are the scores you entered:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "score " << (i + 1) << ": " << score[i] << endl;
	}

	cout << "Total score: " << total << endl;
	cout << "Average score: " << avg << endl;
	return 0;
}