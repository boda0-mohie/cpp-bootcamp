// TASK 17
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 101; i++)
    {
        if (i < 10)
        {
            cout << "00" << i << endl;
        }
        else if (i < 100)
        {
            cout << "0" << i << endl;
        }
        else
        {
            cout << i << endl;
        }
        
    }
    
    return 0;
}
