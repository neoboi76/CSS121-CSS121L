#include <iostream>

using namespace std;

int main()
{
  int a = 2, b = 1, c = 2, d = 1, max1, max2;

  // If-else
  if (a >= b)
    max1 = a;
  else
    max1 = b;

  cout << max1 << endl
       << endl;

  // Ternary operator on one line
  max2 = (c >= d) ? a : b;

  cout << max2 << endl
       << endl;

  return 0;
}