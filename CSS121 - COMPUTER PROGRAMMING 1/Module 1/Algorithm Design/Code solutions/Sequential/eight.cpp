/* Problem #8

Input a temperature in Celsius and output the corresponding temperature in Fahrenheit. The formula is  as follows:
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double cel, far;
    
    cout << "Enter temperature in celsius: ";
    cin >> cel;
    
    far = 9.0 / 5.0 * (cel) + 32;
    
    cout << fixed << setprecision(6);
    cout << "Celsius to fahrenheit is: " << far << endl;

    return 0;
}
