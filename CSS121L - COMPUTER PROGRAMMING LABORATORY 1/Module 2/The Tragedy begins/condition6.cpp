/*
October 1, 2020 falls on a Thursday.  
Make a program  that would input a numeric day 
(1-31 only) and output the day of the week the 
day falls.  For example, if 18 is entered for the day, 
the program must display “SUNDAY”, if 20 was entered, 
“TUESDAY” must be displayed and so on.

Use switch case solution
*/

#include<iostream>
using namespace std;

int main()
{
	//declaration statement
	int day,rem;
	
	cout << "Enter numeric day in October 2020: ";
	cin >> day;
	
	rem = day % 7;
	
	if (day >= 1 && day <= 31) {
		
		switch(rem) {
		case 0:
			cout << "October " << day << " falls on a WEDNESDAY" << endl;
			break;
		case 1:
			cout << "October " << day << " falls on a THURDSAY" << endl;
			break;
		case 2:
			cout << "October " << day << " falls on a FRIDAY" << endl;
			break;
		case 3:
			cout << "October " << day << " falls on a SATURDAY" << endl;
			break;
		case 4:
			cout << "October " << day << " falls on a SUNDAY" << endl;
			break;
		case 5:
			cout << "October " << day << " falls on a MONDAY" << endl;
			break;
		case 6:
			cout << "October " << day << " falls on a TUESDAY" << endl;
			break;
		}
	}
	
	else {
		cout << "Not a day!" << endl;
	}
	
	return 0;
}
