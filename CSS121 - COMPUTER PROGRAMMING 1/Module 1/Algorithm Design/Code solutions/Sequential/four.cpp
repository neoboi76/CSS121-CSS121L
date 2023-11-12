/* Problem #4

Write a flowchart and a pseudocode to calculate the circumference of a circle .enter the value of radius. The equation for determining the circumference, circum, of a circle is circum = 2 pi r, where r is the radius and pi equals 3.1416.
 */

#include <iostream>

using namespace std;

int main()
{

  double pi = 3.1416;
  double r;

  cout << "Enter radius: " << endl;

  cin >> r;

  double circum = 2 * pi * r;

  cout << "Circumference: " << circum << endl;

  return 0;
}