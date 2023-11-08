#include <iostream>
#include <iomanip>

using namespace std;

void printStars(int blanks, int stars);

int main() {
	
	int lines, blanks;
	
	cout << "Enter the number of star lines (1 to 20) "
		 << "to be printed: ";
		 
	cin >> lines;
	
	while (lines < 0 || lines > 20) {
		
		cout << "Number of star lines should be "
			 << "between 1 and 20" << endl;
		cout << "Enter the number of star lines "
			 << "(1 to 20) to be printed: ";
		cin >> lines;
		
	}
	
	cout << endl << endl;
	blanks = 30;
	
	for (int i = 1; i <= lines; i++) {
		printStars(blanks, i);
		blanks--;
	}
	
	return 0;
}

void printStars(int blanks, int stars) {
	
	for (int i = 1; i <= blanks; i++) {
		cout << ' ';
	}
	for (int i = 1; i <= stars; i++) {
		cout << " *";
	}
	
	cout << endl;

}

