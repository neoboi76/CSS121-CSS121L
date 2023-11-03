/*
Selective-Iterative Problem
	Create a flowchart and a pseudocode that would input a number and output its factor values. NOTE: Validate first the number before
	processing the factor. If the number is either zero or negative, then end the flowchart / pseudocode. if the number is positive do the
	following below:
		Sample Output:
		Enter a Number: 6
		Its factors are: 1 2 3 6
*/

#include <iostream>

using namespace std;

int main() {
	
	int num;
	int factor = 1;
	
	cout << "Enter a number: ";
	cin >> num;
	
	if (num > 0) {
		
		cout << "It's factors are: ";
		
		while (factor <= num){
			if (num % factor == 0) {
				cout << factor << " ";
			}
			
			factor++;
		} 
	}
	
	return 0;
	
}
