// TASK 7
#include <iostream>

using namespace std;

int main()
{
    int n = 2;
    while (n <= 128)
    {
        cout << n << endl;
        n = n * 2;
    }
    cout << "--------------------------\n";
    for (int i = 2; i <= 128; i = i * 2)
    {
        cout << i << endl;
    }
    
    return 0;
}

// Output Needed
// 2
// 4
// 8
// 16
// 32
// 64
// 128