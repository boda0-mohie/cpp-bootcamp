// Task 5
#include <iostream>
using namespace std;


int thepower(int base, int power)
{
  int result = 1;
  for (int i = 0; i < power; i++)
  {
    result *= base;
  }
  cout << result << "\n";
  return result;
}

int main()
{
  thepower(2, 5); // 32
  return 0;
}