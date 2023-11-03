/* Problem #2 
	Create a program that will compute the bonus of employees. Consider the following criteria:
	if the employees monthly salary is less than 1000.00, the bonus is 50% of the salary; for the
	employees with salaries of greater than or equal to 1000.00, the bonus is 1000.00. Output the
	corresponding bonus of the employee.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double monSal, bonus;
	const double disc = 0.50;

	cout << "Enter monthly salary: Php ";
	cin >> monSal;
	
	
	if (monSal >= 1000.00) {
		bonus = 1000.00;
	}
	
	else {
		bonus = monSal * disc;
	}
	
	cout << fixed << setprecision(3);
	cout << "Bonus: Php " << bonus << endl;
	
	return 0;
	
}
