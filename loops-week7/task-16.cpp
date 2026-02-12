// TASK 16
#include <iostream>
using namespace std;

int main()
{
    int index = 10;
    int jump = 2;

    for (;;)
    {
        if (index < 4)
        {
            break;
        }
        cout << index << endl;
        index -= jump;
    }

    return 0;
}

// Output Needed
// 10
// 8
// 6
// 4
