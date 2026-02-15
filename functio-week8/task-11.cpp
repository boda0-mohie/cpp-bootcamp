// Task 11
#include <iostream>
using namespace std;

int firstnegative(int arr[], int sizeOfArr)
{
    int negative = INT_MIN;
    for (int i = 0; i < sizeOfArr; i++)
    {
        if (arr[i] < 0)
        {
            if (arr[i] > negative)
            {
                negative = arr[i];
            }
            
        }
    }
    return negative;
}

int main()
{
    int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0, -5, -10}; // -5
    int numssize = size(numbers);
    cout << firstnegative(numbers, numssize) << "\n";
    return 0;
}