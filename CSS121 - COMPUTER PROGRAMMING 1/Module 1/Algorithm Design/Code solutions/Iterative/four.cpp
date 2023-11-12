
/*Problem #4
Create a flowchart and pseudocode that will input five numbers and output how many of the numbers 
entered that is divisible by 2, divisible by 3, and divisible by both 2 and 3 & not divisible by
both 2 and 3.*/



#include <iostream>

using namespace std;



int main() {
	
	int num;
	int divBy2 = 0;
	int divBy3 = 0;
	int divByBoth = 0;
	int divByNeither = 0;
	int ctr = 1;
	
	cout << "Enter five numbers: " << endl;
	
	
	while (ctr <= 5) {
		
		cin >> num;
		
		if (num % 2 == 0 && num % 3 == 0) {
			divByBoth++;
		}
		
		else if (num % 2 == 0) {
			divBy2++;
		}
		
		else if (num % 3 == 0){
			divBy3++;
		}
		
		else {
			divByNeither++;
		}
		
		ctr++;
	}
	
	cout << "Divisible by 2: " << divBy2 << endl;
	cout << "Divisible by 3: " << divBy3 << endl;
	cout << "Divisible by both 2 and 3: " << divByBoth << endl;
	cout << "Divisible by Neither 2 or 3: " << divByNeither << endl;
	
	return 0;
	
}
