/*
Digital root is the recursive sum of all the digits in a number.

Given n, take the sum of the digits of n. If that value has more than one digit, 
continue reducing in this way until a single-digit number is produced. The input 
will be a non-negative integer.

Examples

    16  -->  1 + 6 = 7
   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2

*/

#include <iostream>

using namespace std;

int digital_root(unsigned long long n) {
	
	int rem = 0;
	int sum = 0;
	
	while (n != 0) {
		rem = n % 10;
		n /= 10;
		sum += rem;
		if (sum > 9) {
			rem = sum % 10;
			sum /= 10;
			sum += rem;
		}
	}
	
	return sum;
}

int main() {
	
	int num;
	
	do {
		cout << "Input a positive number: ";
		cin >> num;
	} while (num < 0);
	
	cout << "The single digit sum of the digit " << num << " is " << digital_root(num);
	
	return 0;
}


