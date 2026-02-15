// Task 10
#include <iostream>
using namespace std;

int minpositive(int arr[], int size)
{
  int minpos = -1;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > 0)
    {
      if (minpos == -1 || arr[i] < arr[minpos])
      {
        minpos = i;
      }
    }
  }
  return minpos;
}


int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}