/*
October 1, 2020 falls on a Thursday. Make a program that would input a numeric
day (1 - 31 only) and output the day of the week the day falls. For example, if
18 is entered for the day, the program must display "SUNDAY", if 20 was entered,
"TUESDAY" must be displayed and so on.

Use a switch case solution

ALL NUMERIC DATES CORRESPOND TO THE DATES IN OCTOBER 2020 ONLY!



*/

#include <iostream>

using namespace std;

int main() {
	
	int day, rem;
	
	
	cout << "Enter numeric date in December: ";
	cin >> day;
	
	while (day < 1 || day > 31) {
		cout << "Enter numeric day for December: ";
		cin >> day;
	}
	
	rem = day % 7;
	
	if (rem == 0) {
		cout << "December " << day << " falls on THURSDAY" << endl;
	}
	
	 else if (rem == 1) {
		cout << "December " << day << " falls on FRIDAY" << endl;
	}
	
	else if (rem == 2) {
		cout << "December " << day << " falls on SATURDAY" << endl;
	}
	
	else if (rem == 3) {
		cout << "December " << day << " falls on SUNDAY" << endl;
	}
	
	else if (rem == 4) {
		cout << "December " << day << " falls on MONDAY" << endl;
	}
	
	else if (rem == 5) {
		cout << "December " << day << " falls on TUESDAY" << endl;
	}
	
	else if (rem == 6) {
		cout << "December " << day << " falls on WEDNESDAY" << endl;
	}
	
	
	
	
	return 0;
	
}
