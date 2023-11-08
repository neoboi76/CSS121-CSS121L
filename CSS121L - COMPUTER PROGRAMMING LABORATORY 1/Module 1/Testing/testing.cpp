#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double A, V, r, h;
	
	const float pi = 3.1416;
	
	cout << "Enter radius: ";
	cin >> r;
	
	cout << "Enter height: ";
	cin >> h;
	
	A = 2 * pi * r * h + 2 * pi * (r * r);
	V = pi * (r * r) * h;
	
	cout << fixed << setprecision(2);
	cout << "Area = " << A << endl;
	cout << "Volume = " << V << endl;
	
	return 0;
	
}
