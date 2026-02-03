// TASK 4
#include <iostream>
using namespace std;

int main()
{
    // Example 1
    int vals[]{100, 200, 250, 400, 200};
    // Example 2
    int vals[]{100, 200, 500, 400, 200};
    // Example 3
    int vals[]{100, 200, 600, 400, 200};

    if ((vals[0] + vals[4]) > vals[2])
    {
        cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
        cout << vals[0] << " + " << vals[4] << " = " << (vals[0] + vals[4]) << endl;
        cout << (vals[0] + vals[4]) << " > " << vals[2];
    }
    else if ((vals[1] + vals[3]) > vals[2])
    {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number" << endl;
        cout << vals[1] << " + " << vals[3] << " = " << (vals[1] + vals[3]) << endl;
        cout << (vals[1] + vals[3]) << " > " << vals[2];
    }
    else
    {
        cout << "Middle Number Is The Largest" << endl;
        cout << vals[2] << endl;
    }
}