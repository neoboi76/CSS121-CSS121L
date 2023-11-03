/* Problem #6

Create a flowchart and a pseudocode that would input an integer number and then output its one’s digit or the right most digit.
 */

#include <iostream>
using namespace std;

int main()
{

  int num;
  int outNum;

  cout << "Enter an integer: " << endl;

  cin >> num;

  outNum = num % 10;

  cout << outNum << endl;

  return 0;
}