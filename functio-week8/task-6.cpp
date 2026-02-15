#include <iostream>
using namespace std;

string swapping(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'H' || str[i] == 'h')
        {
            result += str[i];
            continue;
        }
        else if (isupper(str[i]))
        {
            result += char(tolower(str[i]));
        }
        else
        {
            result += char(toupper(str[i]));
        }
    }
    return result;
}
int main()
{
    cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
    cout << toupper('h') << "\n"; // 72
    return 0;
}