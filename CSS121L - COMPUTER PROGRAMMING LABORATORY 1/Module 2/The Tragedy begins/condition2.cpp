/*
Create a program that will compute the bonus 
of employees. Consider the following criteria: 
if the employees monthly salary is <1000.00, 
the bonus is 50% of the salary; 
for the employees with salaries >=1000.00, 
the bonus is 1000.00. 
Output the corresponding bonus of the employee.

*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	double sal, bonus;
	const double lesSal = 0.50;
	const double moreSal = 1000.00;
	
	cout << "Enter monthly salary: Php ";
	cin >> sal;
	
	if (sal >= 1000.00) {
		bonus = 1000.00;
	}
	
	else {
		bonus = sal * lesSal;
	}
	
	cout << fixed << setprecision(2);
	cout << "Salary: Php " << sal << endl;
	cout << "Bonus: Php " << bonus << endl;
	
	return 0;
}
