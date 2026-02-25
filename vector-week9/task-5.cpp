#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80}; // 8
    vector<int>::iterator it = numbers.begin();

    // Write Method One
    it = numbers.begin() + (*numbers.begin() - numbers.size()) * 2;

    // Write Method Two
    // it = numbers.end() - ((*numbers.begin() - numbers.size()) + (*numbers.begin() - numbers.size()));

    // Write Method Three
    // advance(it, (*numbers.begin() - numbers.size()) + (*numbers.begin() - numbers.size()));

    cout << *it << "\n"; // 50
    return 0;
}