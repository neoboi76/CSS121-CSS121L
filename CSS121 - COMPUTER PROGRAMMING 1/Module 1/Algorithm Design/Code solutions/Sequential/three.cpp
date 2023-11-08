/* Problem #3

Create a flowchart and a pseudocode that would input numeric values to A, B, C, D and exchange their values such that A goes to B, B goes to C, C goes to D, and D goes to A.
Hint: you may use a temp variable to swap values of A,B,C and D
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Write C++ code here
    int a, b, c, d, tempB;
    
    a = 45;
    b = -99;
    c = 120;
    d = -6;
    
    cout << "Before swapping" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;
    cout << "D = " << d << endl;
    
    int tempA = a;
    
    a = d;
    d = c;
    c = b;
    b = tempA;
    
    cout << "After swapping" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;
    cout << "D = " << d << endl;

    return 0;
}
