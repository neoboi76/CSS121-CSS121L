/* Problem #1

Create a flowchart and a pseudocode that would input an integer number and then indicate whether the number is an even or an odd number.
 */

#include <iostream>
using namespace std;

int main()
{

  int num;

  cout << "Enter an integer: " << endl;

  cin >> num;

  if (num % 2 == 0)
  {

    cout << "Even" << endl;
  }
  else
  {

    cout << "Odd" << endl;
  }

  return 0;
}