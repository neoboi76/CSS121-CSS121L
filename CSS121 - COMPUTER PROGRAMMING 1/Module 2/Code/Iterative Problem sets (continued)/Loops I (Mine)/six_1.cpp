//Multiplication Table ver 1


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int row, col;
	int const sizerow = 20;
	int const sizecol = 15;
	
	cout << "Displaying a " << sizerow << 'x' << sizecol << " Multiplication table" << endl;
	
	for (row = 1; row <= sizerow; row++) {
		
		for (col = 1; col <= sizecol; col++) {
			cout << setw(5) << col * row;
		}
		
		cout << endl;
	}
	
}
