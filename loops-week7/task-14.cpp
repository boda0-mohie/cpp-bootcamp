// TASK 14
#include <iostream>
using namespace std;

int main()
{

    int num = 2;
    while (num < 520)
    {
        if (num == 2)
        {
            cout << num - 1 << endl;
        }

        num = num + 2;
        cout << num << endl;
        num = num * 2;
    }
    return 0;
}
