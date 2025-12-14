#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n\n";

    cout << "For loop:\n";
    for (int i = 1; i <= 10; ++i)
        cout << i << (i < 10 ? ' ' : '\n');

    cout << "While loop:\n";
    int j = 1;
    while (j <= 10) {
        cout << j << (j < 10 ? ' ' : '\n');
        ++j;
    }

    cout << "Do-while loop:\n";
    int k = 1;
    do {
        cout << k << (k < 10 ? ' ' : '\n');
        ++k;
    } while (k <= 10);

    return 0;
}