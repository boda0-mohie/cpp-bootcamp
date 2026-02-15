// Task 14
#include <iostream>
using namespace std;

// Write Your Function Here
int calculate(int a, int b, string operation = "a")
{
    if (operation == "a")
        return a + b;
    else if (operation == "subtract" || operation == "s")
        return a - b;
    else if (operation == "multiply" || operation == "m")
        return a * b;
    else
        return 0;
}

int main()
{
    cout << calculate(10, 20) << "\n";             // 30
    cout << calculate(10, 20, "a") << "\n";        // 30
    cout << calculate(10, 20, "s") << "\n";        // -10
    cout << calculate(10, 20, "subtract") << "\n"; // -10
    cout << calculate(10, 20, "multiply") << "\n"; // 200
    cout << calculate(10, 20, "m") << "\n";        // 200
    cout << calculate(10, 20, "Invalid") << "\n";  // 0
    return 0;
}