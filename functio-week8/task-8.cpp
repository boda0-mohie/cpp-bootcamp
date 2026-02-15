// Task 8
#include <iostream>
using namespace std;

int plusandmultiply(int numbers[], int size)
{
  int evenresult = 0;
  int oddresult = 1;
  for (int i = 0; i < size; i++)
  {
    if (numbers[i] % 2 == 0)
    {
      evenresult += numbers[i];
    }
    else
    {
      oddresult *= numbers[i];
    }
  }
  return evenresult + oddresult;
}

int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}