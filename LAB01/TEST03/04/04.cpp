#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter student ID: ";
    string id;
    if (!(cin >> id)) return 0;

    // Extract last two numeric digits from the ID (handles non-digit characters)
    string digits;
    for (int i = static_cast<int>(id.size()) - 1; i >= 0 && static_cast<int>(digits.size()) < 2; --i)
    {
        if (isdigit(static_cast<unsigned char>(id[i])))
            digits.push_back(id[i]);
    }
    if (digits.empty())
    {
        cout << "No digits found in the provided ID.\n";
        return 0;
    }
    reverse(digits.begin(), digits.end());
    int value = stoi(digits);

    cout << "Multiplication table for " << value << " (last two digits: " << digits << ")\n";
    for (int i = 1; i <= 12; ++i)
    {
        cout << value << " x " << i << " = " << (value * i) << '\n';
    }

    return 0;
}
