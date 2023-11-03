/* Displaying
	#
	# #
	# # #
	# # # #
	# # # # #
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int row, col;
	const int sizerow = 5;
	
	for (row = 1; row <= sizerow; row++) {
		
		for (col = 1; col <= row; col++) {
			cout << setw(3) << col;
		}
		cout << endl;
	}
	
	return 0;
}
