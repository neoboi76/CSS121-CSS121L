/* Problem #7

-	Design an algorithm to find the perimeter and area of a rectangle
-	The perimeter and area of the rectangle are given by the following formulas:
 */

#include <iostream>
using namespace std;

int main()
{

  double len;
  double wid;
  double perim;
  double area;

  cout << "Please enter the following: " << endl;

  cout << "Length: " << endl;
  cin >> len;

  cout << "Width: " << endl;
  cin >> wid;

  perim = 2 * (len + wid);
  area = len * wid;

  cout << "Perimter: " << perim << endl;
  cout << "Area: " << area << endl;

  return 0;
}