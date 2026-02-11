// TASK 6
#include <iostream>

using namespace std;

int main() {
    int n = 10;
    // Using While
    while (n <= 100000000)
    {
        cout << n << endl;
        n = n * n; 
    }
    cout << "-------------------------------" << endl;
    // Using for
    for (int i = 10; i <= 100000000;)
    {
        cout << i << endl;
        i = i * i;
    }
    
    return 0;
}

// Output Needed
// 10
// 100
// 10000
// 100000000