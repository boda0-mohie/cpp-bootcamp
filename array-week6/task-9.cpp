// Task 9
#include <iostream>
#include <array>
using namespace std;

int main() {

    
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    // Method 1
    // 6
    cout << "Method 1: " << sizeof(nums) / sizeof(nums[0]) << endl;

    // Method 2
    // 6
    cout << "Method 2: " << nums.size() << endl;

    // Method 3
    // 6
    cout << "Method 3: "<< nums.end() - nums.begin() << endl;

    return 0;
}
