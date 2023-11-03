/* Problem #4
Create a program that will display the numbers below:
	2, 4, 4, 16, 6, 36, 8, 64, 10, 100
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int x, y;
	
	for (x = 2; x <= 10; x += 2) {
		y = x * x;
		cout << " " <<  x << "," << " " <<  y << ",";
	}
	
	return 0;
}
