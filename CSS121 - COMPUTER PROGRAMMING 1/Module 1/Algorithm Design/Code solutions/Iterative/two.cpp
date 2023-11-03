/* Problem #2
Create a flowchart and pseudocode that will generate the following number series:
    1, 2, 4, 7, 11, 16, 22, 29, 37, and 46
 */

#include <iostream>
using namespace std;

int main()
{

  int x = 1;
  int y = 1;

  while (x <= 46)
  {

    cout << x << endl;
    x = x + y;
    y = y + 1;
  }

  return 0;
}