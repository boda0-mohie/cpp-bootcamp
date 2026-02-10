// TASK 1 
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    cout << "====================" << endl;
    int i = 1;
    do {
        cout << i << endl;
        i++;
    } while (i <= 10);

    cout << "====================" << endl;
    int x = 1;
    while (x <= 10) {
        cout << x << endl;
        x++;
    }
    return 0;
}