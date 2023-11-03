/* Problem #2

Workers at Kookaburra Factory have a regular working hours of 40 hours per week and are paid Php 50.00 per hour.  However, if the workers rendered more than 40 hours per week, the excess hours are paid 75% more.  Create a flowchart and a pseudocode that would input the number of hours rendered by a worker in one week and output his net salary.
 */

#include <iostream>
using namespace std;

int main()
{

  int hrs;
  double netSal;

  cout << "Please enter hours rendered: ";

  cin >> hrs;

  if (hrs > 40)
  {

    netSal = ((hrs - 40) * 50.0) * 1.75 + (40 * 50.0);
  }
  else
  {

    netSal = hrs * 50.0;
  }

  cout << "Net salary: " << netSal << endl;

  return 0;
}
