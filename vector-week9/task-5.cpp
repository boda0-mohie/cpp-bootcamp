#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator it = nums.begin();

    auto ite = nums.begin() + 1;

    cout << "First Element Is: " << *it << "\n";
    cout << "Second Element Is: " << *ite << "\n";
    cout << "First Element Is: " << *nums.begin() << "\n";

    nums.erase(it, it + 2);

    cout << "First Element After Delete Is: " << *nums.begin() << "\n";
}