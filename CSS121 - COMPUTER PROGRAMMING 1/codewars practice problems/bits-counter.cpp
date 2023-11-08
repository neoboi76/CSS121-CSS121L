/*
Write a function that takes an integer as input, and returns the number of bits 
that are equal to one in the binary representation of that number. You can guarantee 
that input is non-negative.

Example: The binary representation of 1234 is 10011010010, so the function should 
return 5 in this case
*/

#include <iostream>

using namespace std;

unsigned int countBits(unsigned long long n) {
	
	int rem = 0;
	int bits = 0;
	
	while (n != 0){
		rem = n % 2;
		n /= 2;
		if (rem == 1) {
			bits++;
		}
	}
	
	return bits;
}

int main() {
	
	int num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	cout << "Number of bits: " << countBits(num);
	
	return 0;
}

