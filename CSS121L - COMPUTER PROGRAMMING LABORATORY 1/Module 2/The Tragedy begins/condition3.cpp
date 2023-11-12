/*
Workers at Kookaburra Factory have a regular 
working hours of 40 hours per week and are 
paid Php 50.00 per hour.  However, if the workers 
rendered more than 40 hours per week, the excess 
hours are paid 75% more.  
Create a program that would input the number 
of hours rendered by a worker in one week 
output his net salary. 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double netSal;
	int hours;
	const double regSal = 50.00;
	const double excess = 1.75;
	const int tolHrs = 40.00;
	
	cout << "Enter hours rendered: ";
	cin >> hours;
	
	if (hours <= tolHrs) {
		netSal = hours * regSal;
	}
	
	else {
		netSal = ((hours - tolHrs) * regSal) * excess + (tolHrs * regSal);
	}
	
	cout << fixed << setprecision(2);
	cout << "Net Salary: Php " << netSal << endl;
	
	return 0;
}
