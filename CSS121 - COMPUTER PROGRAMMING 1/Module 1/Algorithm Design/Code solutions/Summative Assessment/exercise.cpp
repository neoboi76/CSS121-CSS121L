#include <iostream>

using namespace std;

int main() {
	
	int num;
	int rem;
	int sum;
	
	cout << "Input a number: ";
	cin >> num;
	
	while (num > 0) {
		rem = num % 10;
		num /= 10;
		sum += rem;
	}
	
	cout << "The sum of the entered digits is: " << sum;
	
	return 0;
	
}
