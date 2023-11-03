#include <iostream>

using namespace std;

int main() {
	
	int a = 10;
	
	int b = a++ + a++ + a++;
		  //10   //11   //12
	cout << b << endl;
	
	return 0;
	
}
