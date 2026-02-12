// TASK 11
#include <iostream>
using namespace std;

int main()
{
    // Friends Array
    string friends[] = {"Ahmed", "Osama", "Ameer"};

    for (int i = 0; i < size(friends); i++)
    {
        cout << "=========\n";
        cout << "= " << friends[i] << " =" << endl;
        cout << "==================\n";
        cout << "== ";
        for (int j = 0; j < size(friends[i]); j++)
        {
            cout << friends[i][j];
            if (j <= size(friends[i]) - 2)
            {
                cout << ", ";
            }
                        
        }
        cout << " =\n";
        cout << "==================\n\n";
    }
    return 0;
}
