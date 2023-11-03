/* Displaying
	* * * * *
	* * * * *
	* * * * *
	* * * * *
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	const int sizerow = 4;
	const int sizecol = 5;
	
	int row, col;
	
	for (row = 1; row <= sizerow; row++) {
		for (col = 1; col <= sizecol; col++) {
			cout << setw(3) << '*';
		}
		cout << endl;
	}
	
	return 0;
	
}
