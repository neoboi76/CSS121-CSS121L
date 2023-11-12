/*
October 1, 2020 falls on a Thursday.  
Make a program  that would input a numeric day 
(1-31 only) and output the day of the week the 
day falls.  For example, if 18 is entered for the day, 
the program must display “SUNDAY”, if 20 was entered, 
“TUESDAY” must be displayed and so on.

Use an if else statement solution
*/

#include<iostream>
using namespace std;

int main()
{
	int rem, day;
	
	cout << "Enter numeric day for October 2020: ";
	cin >> day;
	
	rem = day % 7;
	
	if (rem == 0) {
		cout << "October " << day << " falls on a WEDNESDAY" << endl;
	}
	
	else if (rem == 1) {
		cout << "October " << day << " falls on a THURSDAY" << endl;
	}
	
	else if (rem == 2) {
		cout << "October " << day << " falls on a FRIDAY" << endl;
	}
	
	else if (rem == 3) {
		cout << "October " << day << " falls on a SATURDAY" << endl;
	}
	
	else if (rem == 4) {
		cout << "October " << day << " falls on a SUNDAY" << endl;
	}
	
	else if (rem == 5) {
		cout << "October " << day << " falls on a MONDAY" << endl;
	}
	
	else if (rem == 6) {
		cout << "October " << day << " falls on a TUESDAY" << endl;
	}
	
	else {
		cout << "Not a day!" << endl;
	}
		
}
