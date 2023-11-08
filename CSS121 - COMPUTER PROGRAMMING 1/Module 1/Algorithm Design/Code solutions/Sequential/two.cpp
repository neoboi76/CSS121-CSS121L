/* Pseudocodes & Flowcharts:
  Problem #1
•	Write a flowchart and a pseudocode to convert the length in feet to centimeter.
Direction:
•	 Input the length in feet (use variable LFT)
•	Calculate the length in cm (LCM) by multiplying LFT with 30
•	Print LCM
 */

#include <iostream>
using namespace std;

int main()
{

  double LFT;

  cout << "Enter length in feet: " << endl;

  cin >> LFT;

  double LCM = LFT * 30.48;

  cout << "Feet to centimeter: " << LCM << endl;

  return 0;
}