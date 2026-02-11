// TASK 8
#include <iostream>

using namespace std;

int main()
{
    int n = 2;
    while (n < 128)
    {
        n = n * 2;
        cout << n - 2 << endl;
    }
    cout << "--------------------------\n";
    for (int i = 4; i <= 128; i = i * 2)
    {
        cout << i - 2 << endl;
    }

    return 0;
}

// Output Needed
// 2
// 6
// 14
// 30
// 62
// 126