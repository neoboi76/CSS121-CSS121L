#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	const double unitWorth = 800.00;
	const double enrollFee = 0.25;
	const double fixedAm = 2000.00;
	
	double units;
	
	cout << "Enter number of units for the current term: ";
	cin >> units;
	
	double tuition = (units * unitWorth) + ((units * unitWorth) * enrollFee) + fixedAm;
	
	cout << fixed << setprecision(2);
	cout << "Tuition fee to be paid: " << tuition << endl;
	
	return 0;
	
}
