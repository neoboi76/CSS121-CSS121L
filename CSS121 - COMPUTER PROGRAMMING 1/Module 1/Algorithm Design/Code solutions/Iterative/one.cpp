/* Problem #1 

Create a flowchart and pseudo code that will generate the following number series:
	10, 5, 9, 10, 8, 15, 7, 20, 6, and 25

 */

#include <iostream>
using namespace std;

int main()
{

  int x = 10;
  int y = 5;

  while (x >= 6)
  {
    cout << x << endl;
    cout << y << endl;

    x = x - 1;
    y = y + 5;
  }

  return 0;
}