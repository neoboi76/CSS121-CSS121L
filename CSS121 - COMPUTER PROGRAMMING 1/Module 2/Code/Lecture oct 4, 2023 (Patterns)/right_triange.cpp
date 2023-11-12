#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	/*	To produce:
		*
		**
		***
		****
		*****
	*/
	
	const int size = 5;
	
	for (int i = 1; i <= size; i++) {
		
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		
		cout << endl;
		
	}
	
	return 0;
}
