// Task 12
#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string protocol, string domain, string extension, bool www = true)
{
  if (www == true)
  {
    return protocol + "://www." + domain + "." + extension;
  }
  else
  {
    return protocol + "://" + domain + "." + extension;
  }
}
int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}