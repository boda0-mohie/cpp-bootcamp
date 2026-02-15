// Task 2
#include <iostream>
using namespace std;

// ChatGPT Approach
float money(float salary, int days)
{
    int weeks = days / 7;

    int holidays = weeks * 2;

    int outingDays = days - holidays;

    return salary / outingDays;
}

// My Approach
// double money(int salary, int days)
// {
//     int working_days = days - (days / 7) * 2; // Calculate working days by subtracting holidays
//     double daily_salary = salary / working_days; // Calculate daily salary
//     return daily_salary;
// }

int main()
{
    cout << money(2015, 21) << "\n"; // 134.333
    cout << money(4500, 40) << "\n"; // 150
    return 0;
}
