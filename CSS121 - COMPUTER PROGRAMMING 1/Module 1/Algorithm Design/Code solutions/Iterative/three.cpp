/* Problem #3
Create a flowchart and pseudocode that will input five numbers and output how many of the numbers entered are odd or even.
 */

#include <iostream>
using namespace std;

int main()
{

  int num;
  int odd;
  int even;
  int ctr = 1;

  cout << "Enter five numbers: " << endl;

  while (ctr <= 5)
  {

    cin >> num;

    if (num % 2 == 0)
    {
      even = even + 1;
    }
    else
    {
      odd = odd + 1;
    }

    ctr = ctr + 1;
  }

  cout << "Odd: " << odd << endl;
  cout << "Even: " << even << endl;

  return 0;
}