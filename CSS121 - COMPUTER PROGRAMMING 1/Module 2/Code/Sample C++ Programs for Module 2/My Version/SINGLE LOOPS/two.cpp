/* Diplaying
	* * * *
	*     *
	*     *
	* * * *
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	const int sizerow = 4;
	const int sizecol = 4;
	
	int row, col;
	
	for (row = 1; row <= sizerow; row++) {
		
		for (col = 1; col <= sizecol; col++) {
			
			if (row == 1 || row == 4 || col == 1|| col == 4) {
				cout << setw(3) << '*';
			}
			
			else {
				cout << setw(3) << ' ';
			}
			
		}
		
		cout << endl;
	}
	
}
