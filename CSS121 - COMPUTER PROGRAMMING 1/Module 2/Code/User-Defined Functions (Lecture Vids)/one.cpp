#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;


void highest();
void highest(int n1, int n2);
int highestNum();
int highestNum(int n1, int n2);
bool equalVal;

int main() {
	
	int n1, n2, high, choice;
	
	cout << "**************MENU**************" << endl
		<< "[1] Function w/o return and par"   << endl
		<< "[2] Function w/ par and w/0 return"<< endl
		<< "[3] Function w/ return and w/0 par"<< endl
		<< "[4] Function w/ return and par"    << endl
		<< "*****************************"     << endl;
	
	cout << "Enter choice: ";
	cin >> choice;
	
	switch(choice) {
		
		case 1:
			system("cls");
			highest();
			break;
			
		case 2:
			system("cls");
			cout << "Enter first number: ";
			cin >> n1;
	
			cout << "Enter second number: ";
			cin >> n2;
			
			highest(n1, n2);
			break;
			
		case 3:
			system("cls");
			equalVal = false;
			cout << "Enter first number: ";
			cin >> n1;
	
			cout << "Enter second number: ";
			cin >> n2;
			high = highestNum(n1, n2);
			
			if (equalVal) {
				cout << "The two numbers are equal" << endl;
			}
			
			else {
				cout << "The highest number is " << high << endl;
			}
			break;
			
		case 4:
			system("cls");
			equalVal = false;
			cout << "Enter first number: ";
			cin >> n1;
	
			cout << "Enter second number: ";
			cin >> n2;
			high = highestNum(n1, n2);
			
			if (equalVal) {
				cout << "The two numbers are equal" << endl;
			}
			
			else {
				cout << "The highest number is " << high << endl;
			}
			break;
			
		default:system("cls");cout << "Invalid input!" << endl;
		
	}
	
	
	return 0;
}

void highest() {
	
	int n1, n2, high;
	
	cout << "Enter first number: ";
	cin >> n1;
	
	cout << "Enter second number: ";
	cin >> n2;
	
	if (n1 > n2) {
		high = n1;
		cout << "The highest number is " << high << endl;
	}
	
	else if (n2 > n1) {
		high = n2;
		cout << "The highest number is " << high << endl;
	}
	
	else {
		cout << "The two numbers are equal" << endl;
	}
}

void highest(int n1, int n2) {
	
	int high;
	
	if (n1 > n2) {
		high = n1;
		cout << "The highest number is " << high << endl;
	}
	
	else if (n2 > n1) {
		high = n2;
		cout << "The highest number is " << high << endl;
	}
	
	else {
		cout << "The two numbers are equal" << endl;
	}
}

int highestNum() {
	
	int n1, n2, high;
	
	cout << "Enter first number: ";
	cin >> n1;
	
	cout << "Enter second number: ";
	cin >> n2;
	
	
	if (n1 > n2) {
		high = n1;
	}
	
	else if (n2 > n1) {
		high = n2;
	}
	
	else {
		equalVal = true;
	}
	
	return high;
}

int highestNum(int n1, int n2) {
	
	int high;
	
	if (n1 > n2) {
		high = n1;
	}
	
	else if (n2 > n1) {
		high = n2;
	}
	
	else {
		equalVal = true;
	}
	
	return high;
}
	

	



