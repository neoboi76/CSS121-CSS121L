/* Problem #3
Create a program that will input ten characters and output how
many of the characters entered were alphabetic (A-Z), numeric
(0-9), and special character. Repeat the whole process if the
user presses a value of 'y'.

Note: We will assume that all inputs are single digit/character. 
Hence, "character", one digit. Furthermore, we will alsume that all
numeric inputs are positive. Hence, "0-9".
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	char inp, choice;
	int resInt, resAlp, resSpec;
	
	do {
		system("cls");
		cout << "Input ten chracters: " << endl;
		
		resInt = 0;
		resAlp = 0;
		resSpec = 0;
	
		for (int i = 1; i <= 10; i++) {
			cout << "[" << i << "]: ";
			cin >> inp;
			
			inp = toupper(inp);
			
			if (isalpha(inp)) {
				resAlp++;
			}
			
			else if (isdigit(inp)) {
				resInt++;
			}
			
			else {
				resSpec++;
			}
		}
	
		cout << "Alphabetic: " << resAlp << endl;
		cout << "Numeric: " << resInt << endl;
		cout << "Special: " << resSpec << endl;
		
		do {
			cout << "Do you want to repeat? [y/n]: ";
			cin >> choice;
			choice = toupper(choice);
		} while (choice != 'Y' && choice != 'N');
		
	} while (choice == 'Y');
	
	return 0;
}
