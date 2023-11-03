/* Displaying
	a b c d e
	a b c d e
	a b c d e
	a b c d e
*/

#include <iostream>
#include <iomanip>


using namespace std;

int main() {
	
	int row;
	char col;
	const int sizerow = 4;
	
	for (row = 1; row <= sizerow ; row++) {
		
		for (col = 'a'; col <= 'e'; col++) {
			cout << setw(3) << col;
		}
		
		cout << endl;
	}
	
	return 0;
}
	
