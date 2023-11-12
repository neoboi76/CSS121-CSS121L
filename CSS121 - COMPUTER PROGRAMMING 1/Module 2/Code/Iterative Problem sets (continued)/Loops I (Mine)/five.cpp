/*Displaying
	#
	# #  
	#   #
	#     #
	# # # # #
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int row, col;
	const int sizerow = 5;
	const int sizecol = 5;
	
	
	for (row = 1; row <= sizerow; row++) {
		
		for (col = 1; col <= row; col++) {
			
			if (col == 1 || row == 5 || col == row) {
				cout << setw(3) << '#';
			}
			else {
				cout << setw(3) << ' ';
			}
			
		}
		
		cout << endl;
	}
	
	return 0;
}
