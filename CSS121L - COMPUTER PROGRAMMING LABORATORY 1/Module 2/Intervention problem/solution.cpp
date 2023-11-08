#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double nti, due;
	
	cout << "Enter net taxable income: Php ";
	cin >> nti;
	
	if (nti >= 500) {
		
		if (nti < 2500) {
			due = 0;
		}
		
		else if (nti >= 2500 && nti < 5000) {
			due = 100 + (nti * 0.03);
		}
		
		else if (nti >= 5000 && nti < 10000) {
			due = 175 + (nti * 0.05);
		}
		
		else if (nti >= 10000 && nti < 25000) {
			due = 425 + (nti * 0.08);
		}
		
		else if (nti >= 25000 && nti < 50000) {
			due = 1625 + (nti * 0.13);
		}
		
		else if (nti >= 50000 ) {
			due = 4875 + (nti * 0.25);
		}
		
		cout << fixed << setprecision(2);
		cout << "Tax Due: Php " << due << endl;
		
	}
	
	else {
		cout << "invalid net taxable income" << endl;
	}
	
	return 0;
	
}
