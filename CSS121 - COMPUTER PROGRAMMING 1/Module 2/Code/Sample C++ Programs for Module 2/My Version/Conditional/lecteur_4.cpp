/* Problem #4
Make a program that will enter a letter or a character. Determine if the input
character is a vowel or a consonant.
	Sample Output:
		Enter a character: a
		You have Entered a VOWEL Letter!
*/

#include <iostream>
#include <cctype> //Library of functions for character manipulation (Hence, the "isalpha()" function, which checks whether a input is a alphabetic or not (0 or 1));
#include <cstdlib> //Library for General utilities (Hence the "toupper()" function, which converts lowercase letters into their uppercase equivalents).

using namespace std;

int main() {
	
	char input;
	string type;
	
	cout << "Enter a character: ";
	cin >> input;
	
	input = toupper(input);
	
	if (isalpha(input)) {
		
		if (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U') { 
			type = "VOWEL";
		}
		
		else {
			type = "CONSONANT";
		}
		
		cout << "You have entered a " << type << " Letter" << endl;
	}
	
	else {
		cout << input << " is not a letter!";
	}

	
	return 0;
}
