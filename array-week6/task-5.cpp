#include <iostream>
using namespace std;

int main() {

    // Example 1
    int vals[] = {100, 300, 600, 200, 100};

    if((vals[0] == vals[3] && vals[1] == vals[2]) || (vals[0] == vals[2] && vals[1] == vals[3])) {
        cout << "Array Is Palindrome" << endl;
    } else {
        cout << "Array Is Not Palindrome" << endl;
    }

    // Output
    // "Array Is Palindrome"

    return 0;
}