#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int x, y;
	
	/*Version ko
	x = 1; 
	y = 1;
	
	for (int i = 1; y <= 55; i++) {
		cout << setw(3) << x << ',' << setw(3) << y << ',';
		x += y;
		y += x;
	} */
	
	//Version ni Ma'am
	
	for (x = 1, y = 1; y <= 55; x += y, y += x) {
		cout << setw(3) << x << ',' << setw(3) << y << ',';
	}
	
	return 0;
}
