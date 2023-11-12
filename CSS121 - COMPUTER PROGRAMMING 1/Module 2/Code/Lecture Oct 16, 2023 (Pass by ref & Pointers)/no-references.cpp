#include <iostream>

using namespace std;

void getDisplay(int num1, int num2);

int main() {
	
	int num1, num2;
	
	num1 = 6;
	num2 = 8;
	
	cout << "Num1 = " << num1 << endl;
	cout << "Num2 = " << num2 << endl;
	
	getDisplay(num1, num2);
	
	cout << "After calling getDisplay()" << endl;
	cout << "Num1 = " << num1 << endl;
	cout << "Num2 = " << num2 << endl;
	
}

void getDisplay(int num1, int num2) {
	
	cout << "Num1 = " << num1 << endl;
	cout << "Num2 = " << num2 << endl;
	
	num1 = 10;
	num2 = 20;
	
	cout << "Altering the value of" << endl;
	cout << "Num1 = " << num1 << endl;
	cout << "Num2 = " << num2 << endl;
	
}
