#include <iostream>

using namespace std;

int main() {
	
	int x = 10;
	
	//References refer to values of other variables
	
	int& y = x;//-->10
	
	cout << y << endl;//Output = 10;
	
	//If you the value of y, you change the value of x;
	
	y = 20;//Also changes the value of x to 20
	
	cout << y << " " << x;
	
	
	return 0;
	
}
