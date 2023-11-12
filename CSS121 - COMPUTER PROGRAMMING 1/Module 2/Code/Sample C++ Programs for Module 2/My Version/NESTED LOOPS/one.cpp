/*
 *   *   *   *
 *   *   *   *
 *   *   *   *
 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int row, col;
	const int sizerow = 3;
	const int sizecol = 4;
	
	for (row = 1; row <= sizerow; row++){
		for (col = 1; col <= sizecol; col++) {
			cout << setw(5) << '*';
		}
		cout << endl;
	}
	
	return 0;
	
}
