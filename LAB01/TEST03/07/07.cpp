#include <iostream>
#include <cmath>

using namespace std;

// Returns true if n is a prime number, false otherwise.
bool isPrime(long long n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    cout << "Enter integer to check for primality : ";
    long long value;
    while (cin >> value)
    {
        cout << value << (isPrime(value) ? " is PRIME\n" : " is NOT prime\n");
        cout << "Enter another integer: ";
    }
    return 0;
}