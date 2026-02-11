// TASK 9
#include <iostream>
using namespace std;

int main()
{

    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

    for (int i = 0; i < size(friends); i++)
    {
        if (i == 1 || i == 2)
        {
            cout << friends[i] << endl;
        }
    }
    cout << "---------------------------\n";
    int n = 0;
    while (n < size(friends))
    {
        if (n == 1 || n == 2)
        {
            cout << friends[n] << endl;
        }
        n++;
    }

    return 0;
}