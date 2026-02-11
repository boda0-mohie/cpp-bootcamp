// TASK 10
#include <iostream>
using namespace std;

int main()
{

    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

    for (int i = 0; i < size(friends); i++)
    {
        string name = friends[i];
        if (name[0] == 'A')
        {
            cout << name << endl;
        }
    }
    return 0;
}

// Output Needed
// "Ahmed"
// "Ashraf"
// "Amany"