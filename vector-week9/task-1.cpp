#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {100, 200, 300, 400};

    for (int num : numbers)
    {
        cout << num << endl;
    }

    numbers.push_back(500);

    cout << "First Element Is: " << numbers.front() << endl;

    cout << "Last Element Is: " << numbers.back() << endl;

    return 0;
}