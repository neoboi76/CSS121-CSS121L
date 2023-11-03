#include <iostream>

using namespace std;

int main() {
	
	int num;
	int count = 0;
	
	cout << "Input a number: ";
	cin >> num;
	
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			count++;
		}
	}
	
	if (count > 3) {
		cout << "Composite Number";
	}
	
	else if (num == 1 || num == 0){
		cout << "Neither Composite or Prime";
	}
	
	else {
		cout << "Prime Number";
	}
	
	return 0;
}
