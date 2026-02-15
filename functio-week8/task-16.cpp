// Task 16
#include <iostream>
using namespace std;

int books(int one, int two, int three, int shelves)
{
  int spacesForOne = one * 2;
  int spacesFortwo = two * 4;
  int spacesForThree = three * 6;
  int spacesForShelves = shelves * 20;
  if ((spacesForOne + spacesFortwo + spacesForThree) < spacesForShelves)
  {
    return spacesForShelves - (spacesForOne + spacesFortwo + spacesForThree);
  } else {
    return 0;
  }
  
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}