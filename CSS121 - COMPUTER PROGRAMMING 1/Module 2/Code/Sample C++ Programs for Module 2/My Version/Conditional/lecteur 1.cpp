/* Problem # 1
Given 2 values x and y, create a program that will determine the difference bet,
X & Y. If X - Y is negative, compute R = X + Y; if X - Y is zero, compute R = 2X + 2Y; 
and if  X - Y is positive, compute R = X * Y. Printe out the values of X, Y, and R.
*/


#include <iostream>

using namespace std;

int main() {
	
	int x, y, r, diff;
	
	cout << "Input value for x: ";
	cin >> x;
	
	cout << "Input value for y: ";
	cin >> y;
	
	diff = x - y;
	
	if (diff < 0) {
		r = x + y;
	}
	
	else if (diff == 0) {
		r = (2 * x) + (2 * y);
	}
	
	else {
		r = x * y;
	}
	
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;
	cout << "R = " << r << endl;
	
	return 0;
	
}
