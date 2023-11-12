/* Problem:
• Suppose a2 = 6 and a1 = 3
– a3 = a2 + a1 = 6 + 3 = 9;
– a4 = a3 + a2 = 9 + 6 = 15
• Write a program that determines the nth
Fibonacci number
– Given the first two numbers
*/

#include <iostream>

using namespace std;

int main() {
	
	int a, b, nth, out, i;
	
	cout << "Enter two numbers:" << endl;
	cout << "1st: ";
	cin >> a;
	cout << "2nd: ";
	cin >> b;
	cout << "Enter desired number: ";
	cin >> nth;
	
	out = a + b;
	
	for (i = 2; out <= nth; i++) {
		a = b;
		b = out;
		out = a + b;
	}
	
	cout << "The position of the desired number is: " << i << "th place" << endl;
	
	return 0;
}
