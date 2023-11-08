/* Problem #3

The fine for an over-speeding violation depends on the speed of the erring driver, as follows:
    60 to 75 mph =  Php 2000.00
    76 mph and above = Php 4000.00
Create a flowchart and a pseudocode to input the car’s speed  and then output the fine, if any.
 */

#include <iostream>
using namespace std;

int main()
{

  int speed;
  int fine;

  cout << "Enter car's speed" << endl;

  cin >> speed;

  if (speed >= 60 && speed <= 75)
  {

    fine = 2000;
  }
  else if (speed >= 76)
  {

    fine = 4000;
  }

  else
  {

    fine = 0;
  }

  cout << "Fine incurred: " << fine << endl;

  return 0;
}