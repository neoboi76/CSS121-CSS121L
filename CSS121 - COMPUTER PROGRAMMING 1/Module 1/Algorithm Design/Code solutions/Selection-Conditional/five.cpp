/* Problem #5

Create a program that will input an integer and determine if the number is zero, positive, or a negative value.
 */

#include <iostream>
using namespace std;

int main()
{

  int num;

  cout << "Please enter an integer: " << endl;

  cin >> num;

  if (num == 0)
  {

    cout << "The integer is equivalent to zero" << endl;
  }

  else if (num > 0)
  {

    cout << "The integer is positive" << endl;
  }

  else
  {

    cout << "The integer is negative" << endl;
  }

  return 0;
}