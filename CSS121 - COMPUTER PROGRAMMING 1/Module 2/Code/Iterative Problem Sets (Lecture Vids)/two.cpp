/* Problem #2
Create a program that will input two numbers base (X) and exponent (Y). 
Compute and output the result using the formula X^Y. Using a do-while loop,
validate the value of X and Y. Values must accept positive numbers only.
*/

#include <iostream>

using namespace std;

int main() {
	
	double base, exp, result;
	
	do {
		
		cout << "Enter positive base number: ";
		cin >> base;
		
		if (base <= 0) {
			cout << "Invalid! Please try again" << endl;
		}
			
	} while (base <= 0);
	
	do {
		
		cout << "Enter positive exponent value: ";
		cin >> exp;
		
		if (exp <= 0) {
			cout << "Invalid! Please try again" << endl;
		}
		
	} while (exp <= 0);
	
	result = 1;
	
	
	for (int i = 1; i <= exp; i++) {
		result *= base;
	}
	
	cout << base << "^" << exp << " = " << result << endl;
	
	return 0;
	
}
