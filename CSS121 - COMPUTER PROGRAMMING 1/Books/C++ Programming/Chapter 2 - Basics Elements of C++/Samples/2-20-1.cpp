#include <iostream>

using namespace std;

int main()
{

  int a = 10;

  int b = ++a + ++a + ++a;
  // 11   //12    //13 = 37
  cout << b;

  return 0;
}