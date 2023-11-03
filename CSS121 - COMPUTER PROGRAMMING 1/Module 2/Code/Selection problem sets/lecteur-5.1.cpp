/*
October 1, 2020 falls on a Thursday. Make a program that would input a numeric
day (1 - 31 only) and output the day of the week the day falls. For example, if
18 is entered for the day, the program must display "SUNDAY", if 20 was entered,
"TUESDAY" must be displayed and so on.

Use an if-else statement solution

ALL NUMERIC DATES CORRESPOND TO THE DATES IN OCTOBER 2020 ONLY!

*/

#include <iostream>

using namespace std;

int main() {
	
	int day, rem;
	
	string weekDay;
	
	cout << "Enter numeric day for October 2020: ";
	cin >> day;
	
	if (day >= 1 && day <= 31) {
		rem = day % 7;
		
		switch(rem) {
			case 0: weekDay = "WEDNESDAY";
			break;
			case 1: weekDay = "THURSDAY";
			break;
			case 2: weekDay = "FRIDAY";
			break;
			case 3: weekDay = "SATURDAY";
			break;
			case 4: weekDay = "SUNDAY";
			break;
			case 5: weekDay = "MONDAY";
			break;
			case 6: weekDay = "TUESDAY";
			break;
		}
	
	}
	
	else {
		cout << day << "is not valid!" << endl;
	}
	
	cout << weekDay << endl;
	
	return 0;
	
}
