//Multplication table ver 2

#include <iostream>
#include <iomanip>
#include <ctype.h>

using namespace std;

int main() {
	
	int col, row, sizerow, sizecol;
	char choice;
	
	do {
		
		cout << "Multplication Table Creator" << endl;
		cout << endl;
		
		cout << "Enter size of row: ";
		cin >> sizerow;
		
		cout << "Enter size of column: ";
		cin >> sizecol;
		cout << endl;
		
		cout << "Displaying a " << sizerow << 'x' << sizecol << " Multiplication Table" << endl;
		cout << endl;
		
		for (row = 1; row <= sizerow; row++) {
			
			for (col = 1; col <= sizecol; col++) {
				cout << setw(3) << row * col;
			}
			
			cout << endl;	
		} 
		
		cout << endl;
		cout << "Do you want to try again? [y/n]: ";
		cin >> choice;
		choice = tolower(choice);
		cout << endl;
		
		
	} while (choice == 'y');
	
	return 0;
}
