/*
Sequential Problem
	Create a flowchart and pseudocode that would input a 5-digit number and then extract its one’s
	digit, ten’s digit, hundred’s digit, thousand’s digit and ten thousand’s digit. Output the extracted digits
	and output the digits in reverse order (you must use a formula / arithmetic expression in reversing the
	order of the 5-digit number). NOTE: Use appropriate words for your variables
*/

#include <iostream>

using namespace std;

int main() {
	
	int num;
	
	cout << "Enter a 5-digit number: ";
	cin >> num;
	
	int ones = num % 10;
	int tens = num % 100 / 10;
	int hundreds = num % 1000 / 100;
	int thousands = num % 10000 / 1000;
	int tenThousands = num % 100000 / 10000;
	int reverse = (ones * 10000) + (tens * 1000) + (hundreds * 100) + (thousands * 10) + tenThousands;
	
	cout << "Ten Thousand's Digit is: " << tenThousands << endl;
	cout << "Thousand's Digit is: " << thousands << endl;
	cout << "Hundred's Digit is : " << hundreds << endl;
	cout << "Ten's Digit is: " << tens << endl;
	cout << "One's Digit is: " << ones << endl;
	cout << "The reverse order is: " << reverse << endl;
	
	return 0;
}
