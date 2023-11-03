/* Problem #1
Create a program that will generate this character series: 
	Z, Y, X, W, V, A, C, E, G, I
*/

#include <iostream>
#include <iomanip> // for the "setw()" function, which creates spaces between characters

// While loop

using namespace std;

int main() {
	
	char first, second;
	
	first = 'Z';
	second = 'A';
	
	while (first >= 'V') {
		cout << setw(3) << first << ",";
		first--;
	}
	
	while (second <= 'I') {
		cout << setw(3) << second << ",";
		second += 2;
	}
	
	return 0;
}
