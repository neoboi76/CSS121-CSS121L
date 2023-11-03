#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	/*	To produce:
		*****
		****
		***
		**
		*
	*/
	
	
	for (int i = 5; i >= 0; i--) {
		
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		
		cout << endl;
		
	}
	
	return 0;
}
