#include <iostream>

using namespace std;

int main()
{
  int x, y, a, b;

  // Pre-increment operation
  x = 5;
  y = ++x; // x --> 6, y --> 6

  // Post-increment operating
  a = 5;
  b = a++; // a --> 6, b --> 5;

  cout << x << " " << y << endl;
  cout << a << " " << b << endl;

  return 0;
}