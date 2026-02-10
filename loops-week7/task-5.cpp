// TASK 5
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cout << "Using while loop:" << endl;
    while (n <= 27) {
        if (n % 3 == 0) {
            cout << n << endl;
        }
        n++;
    }
    cout << "Using for loop:" << endl;
    for (int i = 0; i <= 27; i++) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}

// Output Needed
// 0
// 3
// 6
// 9
// 12
// 15
// 18
// 21
// 24
// 27