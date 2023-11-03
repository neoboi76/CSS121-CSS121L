#include <iostream>

using namespace std;

int main() {
	
	double len, wid, area, perim;
	
	cout << "Enter the height of the Square and Rectangle: ";
	cin >> len;
	
	cout << "Enter the wid of the Square and the Rectangle: ";
	cin >> wid;
	
	perim = (len * 2) + (wid * 2);
	area = len * wid;
	
	cout << "The Perimeter of the Square and Rectangle is: " << perim << endl;
	cout << "The Area of the Square and Rectangle is: " << area << endl;
	
	return 0;
	
}
