/* Problem #1
Create a program that will generate this character series: 
	Z, Y, X, W, V, A, C, E, G, I
*/

#include <iostream>
#include <iomanip> // for the "setw()" function, which creates spaces between characters

// For loop

using namespace std;

int main() {
	
	char first, second;
	
	for (first = 'Z'; first >= 'V'; first--) {
		cout << setw(3) << first << ",";
	}
	
	for (second = 'A'; second <= 'I'; second += 2) {
		cout << setw(3) << second << ",";
	}
	
	return 0;
}
