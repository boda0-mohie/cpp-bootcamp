// Task 4
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
    for (int i = 14; i < 20; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    int j = 0;
    while (j < 20) {
        if (j % 2 == 0) {
            cout << j << endl;
        }
        j++;
        if (j == 9) {
            j = 14;
        }
    }
    return 0;
}
// Output Needed
// 0
// 2
// 4
// 6
// 8
// 14
// 16
// 18