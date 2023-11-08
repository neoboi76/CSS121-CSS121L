/* Problem #3
Workers at Kookaburra Factory have a regular working hours of 40 hours
per week and are paid PHP 50.00 per hour. However, if the workers rendered
more than 40 hours per week, the excess hours are paid 75% more. Create a
program that would input the number of hours rendered by a worker in one 
week. Output his net salary
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double hours, netSal;
	
	double const regPay = 50.00;
	double const newPay = 1.75;
	
	cout << "Enter hours rendered: ";
	cin >> hours;
	
	if (hours > 40) {
		netSal = ((hours - 40) * regPay) * newPay + (40 * regPay); //or 2000 + (hours - 40) * newPay, as per Ma'am Gloren's lecture.
	}
	
	else {
		netSal = regPay * hours;
	}
	
	cout << fixed << setprecision(2);
	cout << "Net Salary: Php " << netSal << endl;
	
	return 0;
}
