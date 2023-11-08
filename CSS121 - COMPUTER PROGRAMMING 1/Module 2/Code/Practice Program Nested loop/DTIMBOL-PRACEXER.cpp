#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int col, row;
	const int sizerow = 10;
	const int sizecol = 10;
	
	cout << "Displaying a " << sizerow << " x " << sizecol << " Multiplication Table" << endl;
	
	for (row = 1; row <= sizerow; row++) {
		for (col = 1; col <= sizecol; col++) {
			cout << setw(7) << col * row;
		}
		cout << endl;
	}
	
	return 0;
	
}
