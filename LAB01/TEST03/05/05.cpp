#include <iostream>
#include <random>
#include <limits>
using namespace std;

int main()
{
    // Initialize random number generator and pick secret 1-100
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);
    int secret = dist(gen);

    cout << "Number Guessing Game (1-100)\n";
    cout << "Enter 0 to quit.\n";

    int attempts = 0;
    while (true)   {
        cout << "Your guess: ";
        int guess;
        if (!(cin >> guess))   {
            cout << "Invalid input. Please enter an integer between 1 and 100 or 0 to quit.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (guess == 0)
        {
            cout << "You quit. The secret number was " << secret << ".\n";
            break;
        }

        ++attempts;

        if (guess < secret)
            cout << "Too low.\n";
        else if (guess > secret)
            cout << "Too high.\n";
        else
        {
            cout << "Correct! You guessed the number in " << attempts << " attempt"
                 << (attempts == 1 ? "" : "s") << ".\n";
            break;
        }
    }
    return 0;
}