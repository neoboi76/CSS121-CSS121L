#include <iostream>

using namespace std;

//Reference is defined by including "&" in the definition
void reference(int& num1, int& num2);

/* Either:
	int% num, int & num, or int %num
*/

int main() {
	
	int num1, num2;
	
	num1 = 2;
	num2 = 3;
	
	//Outputs 2 and 3
	cout << num1 << endl;
	cout << num2 << endl;
	
	//Function takes both as argument
	reference(num1, num2);
	//However, it does not get the value, but the "reference"
	
	//Hence, it affects the original value, transcending scope.
	cout << num1 << endl;
	cout << num2 << endl;
	
	/*Output:
		2
		3
		4
		6
		4
		6 
	*/
	
	return 0;
}

void reference(int& num1, int& num2) {
	
	num1 = 4;
	num2 = 6;
	
	cout << num1 << endl;
	cout << num2 << endl;
	
}
