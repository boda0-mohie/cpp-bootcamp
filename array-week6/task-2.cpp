// TASK 2
#include <iostream>
using namespace std;

int main()
{
    // Example 1
    int check = 25;
    int nums[]{40, 20, 30, 70, 100};
    if (nums[0] > check)
    {
        cout << "{" << nums[0] << "}" << " + " << "{" << nums[3] << "}";
        cout << " = ";
        cout << nums[0] + nums[3] << endl;
    }
    // Ouput
    // "{40} + {70} = 110"
    // -------------------------------------------------------------
    int nums[]{20, 35, 30, 70, 100};
    if (nums[1] > check)
    {
        cout << "{" << nums[1] << "}" << " + " << "{" << nums[3] << "}";
        cout << " = ";
        cout << nums[1] + nums[3] << endl;
    }
    // Ouput
    // "{35} + {70} = 105"
    // -------------------------------------------------------------
    int nums[]{20, 25, 30, 70, 100};
    if (nums[2] > check)
    {
        cout << "{" << nums[2] << "}" << " + " << "{" << nums[3] << "}";
        cout << " = ";
        cout << nums[2] + nums[3] << endl;
    }
    // Ouput
    // "{30} + {70} = 100"
    // --------------------------------------------------------------
    return 0;
}