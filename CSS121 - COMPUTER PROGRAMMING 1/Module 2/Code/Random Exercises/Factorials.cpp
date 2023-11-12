#include <iostream>

using namespace std;

int main(){
	
	int num;
	int ctr = 1;
	int out;
	
	cout << "Enter a number: ";
	
	cin >> num;
	
	while (num < 0) {
		cout << "Invalid input! Try again." << endl;
		cout << "Enter a number: ";
		cin >> num;
	}
	
	if (num == 0) {
		out = 1;
	}
	
	else {
		while (ctr <= 5) {
			out *= ctr;
			ctr++;
		}
	}
	

	cout << "Factorial is " << out << endl;	
	
	return 0;
}
