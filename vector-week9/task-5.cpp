#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};
    vector<int>::iterator it = numbers.begin();

    cout << numbers.size() / -1 + numbers.size() << endl;
    // Method One
    advance(it, 4);

    // Method Two
    // it = numbers.end() + (numbers.size() / -1);

    // Method Three
    // it += (numbers.size() / -1 + numbers.size());

    cout << *it << "\n"; // 50
    return 0;
}