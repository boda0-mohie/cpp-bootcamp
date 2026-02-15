// Task 1
#include <iostream>
using namespace std;

int calcspecial(int first, int second)
{
  if (first == second)
  {
    return first + second;
  }
  else if (first > second)
  {
    return first - second;
  }
  else
  {
    return second - first;
  }
}

int main()
{
  cout << calcspecial(40, 40) << "\n";    // First = Second -> 40 + 40 = 80
  cout << calcspecial(200, 50) << "\n";   // First > Second -> 200 - 50 = 150
  cout << calcspecial(100, 300) << "\n";  // First < Second -> 300 - 100 = 200
  return 0;
}