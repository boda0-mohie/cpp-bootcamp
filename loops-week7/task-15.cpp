// TASK 15
#include <iostream>
using namespace std;

int main()
{

    int help_num = 4;
    int nums[] = {2, 4, 5, 6, 10};
    int rev[size(nums)];

    for (int i = 0; i < size(nums); i++)
    {
        rev[size(nums) - 1 - i] = nums[i];
    }
    for (int i = 0; i < size(nums); i++)
    {
        cout << nums[i] << " + " << rev[i] << " = " << nums[i] + rev[i] << endl;
    }

    return 0;
}

// Output Needed
// "2 + 10 = 12"
// "4 + 6 = 10"
// "5 + 5 = 10"
// "6 + 4 = 10"
// "10 + 2 = 12"
