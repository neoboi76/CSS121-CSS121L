/* Problem Evaluate the Following Expressions:
A=12 % 6+(2+12*3)-(12 % 13)
B=A/3+(16+3)-((A*2 % 10)+A )
C=(A !=B)&& !(!F && (A>B)┤||(A<B)   || F)
D=(C && !C)  | |  (!C ┤|| (A<B)|| C)  | |  !C && C
 */

#include <iostream>
using namespace std;

int main()
{

  bool a = 12 % 6 + (2 + 12 * 3) - (12 % 13);
  bool b = a / 3 + (16 + 3) - ((a * 2 % 10) + a);
  bool c = (a != b) && !(!false && (a > b) || (a < b) || false);
  bool d = (c && !c) || (!c || (a < b) || c) || !c && c;

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;

  return 0;
}