#include <iostream>

using namespace std;

void pointers(int* num1, int* num2);

int main() {
	
	int num1 = 5;
	int num2 = 10;
	
	//Outputs 5 and 10
	cout << num1 << endl;
	cout << num2 << endl;
	cout << endl;
	
	pointers(&num1, &num2);//Passing in referenes
	
	//Outputs 15 and 20
	cout << num1 << endl;
	cout << num2 << endl;
	cout << endl;
	
	//See, just like in references
	
	return 0;
}

void pointers(int* num1, int* num2) {
	
	*num1 = 15;
	*num2 = 20;
	
	//Outputs 15 and 20
	cout << num1 << endl;
	cout << num2 << endl;
	
	
}
