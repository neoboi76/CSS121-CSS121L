#include <iostream>

using namespace std;

int main() {
	
	int num;
	int ctr = 1;
	
	cout << "Input number of terms: ";
	cin >> num;
	
	while (num < 0) {
		cout << "Invalid input! Try again." << endl;
		cin >> num;
	}
	
	while (ctr <= num) {
		int out = ctr * ctr * ctr;
		cout << "Number is: " << ctr << " and cube of the " << ctr << " is :" << out << endl;
		ctr++;
	}
	
	return 0;
}
