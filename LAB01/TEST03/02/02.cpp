#include <iostream>
using namespace std;
int main()
{
    cout << "start\n";
    // Print even numbers from 2 to 20
    for (int i = 2; i <= 20; i += 2)

    {
        cout << i;
        if (i < 20) std::cout << ' ';
    }
    cout << '\n';

    return 0;
}