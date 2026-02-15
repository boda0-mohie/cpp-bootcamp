// Task 17
#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int numOfPhones, int numOfUsed, int priceOfNew, int persent) {
    int revenue = ((numOfPhones - numOfUsed) * priceOfNew) + (numOfUsed * (priceOfNew - 200));
    int netProfit =  revenue *  persent / 100;
    return revenue - netProfit;
}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}