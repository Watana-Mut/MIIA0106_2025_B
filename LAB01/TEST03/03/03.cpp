#include <iostream>
using namespace std;   

int main()
{
    // Calculate sum of integers from 1 to 100
    int sum = 0;
    for (int i = 1; i <= 100; ++i)
    {
        sum += i;
    }

    cout << "Sum of 1 to 100 is: " << sum << '\n';
    return 0;
}