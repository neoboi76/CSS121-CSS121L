#include <iostream>

using namespace std;

int main() {
	int num;
	int ctr = 1;
	int factors = 0;
	
	cout << "INPUT A NUMBER: ";
	cin >> num;
	
	while (num <= 0) {
		cout << "INVALID INPUT! TRY AGAIN." << endl;
		cout << "INPUT A NUMBER: ";
		cin >> num;
	}
	
	while (ctr <= num) {
		if (num % ctr == 0) {
			factors++;
		}
		ctr++;
	}
	
	if (factors == 2) {
		cout << num << " IS A PRIME NUMBER";
	}
	
	else {
		cout << num << " IS NOT A PRIME NUMBER!";
	}
	
	return 0;
}
