#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

int main() {
	
	int choice, year, num, ones, tens, hundreds, thousands, 
	tenThousands;
	
	string words, numerals;
	
	cout << "-----------M E N U-----------" << endl
		 << "[1] Decimal to Roman Numerals" << endl
		 << "[2] Numbers to Words"			<< endl
		 << "[3] exit"						<< endl
		 << "---------------------------"   << endl;
		 
		 cout << "Enter your choice: ";
		 cin >> choice;
		 
		 switch(choice) {
		 	
		 	case 1: {
				
				cout << "Enter year in numbers: ";
		 		cin >> year;
		 		
		 		if (year >= 1 && year <= 3000) {
		 			
		 			ones = year % 10;
		 			tens = year % 100 / 10;
		 			hundreds = year % 1000 / 100;
		 			thousands = year % 10000 / 1000;
		 			
		 			switch(thousands) {
		 				
		 				case 1: 
		 					numerals += "M";
		 					break;
		 				case 2: 
		 					numerals += "MM";
		 					break;
		 				case 3: 
		 					numerals += "MMM";
		 					break;
		 				
					 }
					 
					 switch(hundreds) {
		 				
		 				case 1: 
		 					numerals += "C";
		 					break;
		 				case 2: 
		 					numerals += "CC";
		 					break;
		 				case 3: 
		 					numerals += "CCC";
		 					break;
		 				case 4: 
		 					numerals += "CD";
		 					break;
		 				case 5: 
		 					numerals += "D";
		 					break;
		 				case 6: 
		 					numerals += "DC";
		 					break;
		 				case 7: 
		 					numerals += "DCC";
		 					break;
		 				case 8: 
		 					numerals += "DCCC";
		 					break;
		 				case 9: 
		 					numerals += "CM";
		 					break;
		 				
					 }
					 
					 switch(tens) {
		 				
		 				case 1: 
		 					numerals += "X";
		 					break;
		 				case 2: 
		 					numerals += "XX";
		 					break;
		 				case 3: 
		 					numerals += "XXX";
		 					break;
		 				case 4: 
		 					numerals += "XL";
		 					break;
		 				case 5: 
		 					numerals += "L";
		 					break;
		 				case 6: 
		 					numerals += "LX";
		 					break;
		 				case 7: 
		 					numerals += "LXX";
		 					break;
		 				case 8: 
		 					numerals += "LXXX";
		 					break;
		 				case 9: 
		 					numerals += "XC";
		 					break;
		 				
					 }
		 			
		 			switch(ones) {
		 				
		 				case 1: 
		 					numerals += "I";
		 					break;
		 				case 2: 
		 					numerals += "II";
		 					break;
		 				case 3: 
		 					numerals += "III";
		 					break;
		 				case 4: 
		 					numerals += "IV";
		 					break;
		 				case 5: 
		 					numerals += "V";
		 					break;
		 				case 6: 
		 					numerals += "VI";
		 					break;
		 				case 7: 
		 					numerals += "VII";
		 					break;
		 				case 8: 
		 					numerals += "VIII";
		 					break;
		 				case 9: 
		 					numerals += "IX";
		 					break;
		 				
					 }
					 
					 cout << "conversion of " << year << " to roman is: " << numerals << endl;	
				}
				 
				else {
				 	cout << num << " is invalid. Number should be between 1-3000 only" << endl;
				}
				
			}
			break;
		 	
		 	case 2: {
		 		cout << "Enter number: ";
		 		cin >> num;
		 		
		 		if (num >= 1 && num <= 10000) {
		 			
		 			ones = num % 10;
		 			tens = num % 100 / 10;
		 			hundreds = num % 1000 / 100;
		 			thousands = num % 10000 / 1000;
		 			tenThousands = num % 100000 / 10000;
		 			
		 			switch(tenThousands) {
		 				case 1:
		 					words += "Ten Thousand ";
		 					break;
					 }
		 			
		 			
		 			switch(thousands) {
		 				
		 				case 1: 
		 					words += "One Thousand ";
		 					break;
		 				case 2: 
		 					words += "Two Thousand ";
		 					break;
		 				case 3: 
		 					words += "Three Thousand ";
		 					break;
		 				case 4: 
		 					words += "Four Thousand ";
		 					break;
		 				case 5: 
		 					words += "Five Thousand ";
		 					break;
		 				case 6: 
		 					words += "Six Thousand ";
		 					break;
		 				case 7: 
		 					words += "Seven Thousand ";
		 					break;
		 				case 8: 
		 					words += "Eight Thousand ";
		 					break;
		 				case 9: 
		 					words += "Nine Thousand ";
		 					break;
		 				
					 }
					 
					 switch(hundreds) {
		 				
		 				case 1: 
		 					words += "One Hundred ";
		 					break;
		 				case 2: 
		 					words += "Two Hundred ";
		 					break;
		 				case 3: 
		 					words += "Three Hundred ";
		 					break;
		 				case 4: 
		 					words += "Four Hundred ";
		 					break;
		 				case 5: 
		 					words += "Five Hundred ";
		 					break;
		 				case 6: 
		 					words += "Six Hundred ";
		 					break;
		 				case 7: 
		 					words += "Seven Hundred ";
		 					break;
		 				case 8: 
		 					words += "Eight Hundred ";
		 					break;
		 				case 9: 
		 					words += "Nine Hundred ";
		 					break;
		 				
					 }
					 
					 if (tens == 1) {
					 	
					 	switch(ones) {
					 		
					 		case 0:
					 			words += "Ten ";
					 			break;
					 		case 1: 
		 						words += "Eleven ";
		 						break;
		 					case 2: 
		 						words += "Twelve ";
		 						break;
		 					case 3: 
		 						words += "Thirteen ";
		 						break;
		 					case 4: 
		 						words += "Fourteen ";
		 						break;
		 					case 5: 
		 						words += "Fifteen ";
		 						break;
		 					case 6: 
		 						words += "Sixteen ";
		 						break;
		 					case 7: 
		 						words += "Seventeen ";
		 						break;
		 					case 8: 
		 						words += "Eighteen ";
		 						break;
		 					case 9: 
		 						words += "Nineteen ";
		 						break;
						 }
						 
					 }
					 
					 
					else {
						
						switch(tens) {
		 				
		 					case 2: 
		 						words += "Twenty ";
		 						break;
		 					case 3: 
		 						words += "Thirty ";
		 						break;
		 					case 4: 
		 						words += "Fourty ";
		 						break;
		 					case 5: 
		 						words += "Fifty ";
		 						break;
		 					case 6: 
		 						words += "Sixty ";
		 						break;
		 					case 7: 
		 						words += "Seventy ";
		 						break;
		 					case 8: 
		 						words += "Eighty ";
		 						break;
		 					case 9: 
		 						words += "Ninety ";
		 						break;
		 				
					 	}
		 			
		 				switch(ones) {
		 				
		 					case 1: 
		 						words += "One ";
		 						break;
		 					case 2: 
		 						words += "Two ";
		 						break;
		 					case 3: 
		 						words += "Three ";
		 						break;
		 					case 4: 
		 						words += "Four ";
		 						break;
		 					case 5: 
		 						words += "Five ";
		 						break;
		 					case 6: 
		 						words += "Six ";
		 						break;
		 					case 7: 
		 						words += "Seven ";
		 						break;
		 					case 8: 
		 						words += "Eight ";
		 						break;
		 					case 9: 
		 						words += "Nine ";
		 						break;
		 				
					 	}
					}
					 
					 cout << "conversion of " << num << " to words is: " << words << endl;
		 			
				}
				 
				else {
				 	cout << num << " is invalid. Number should be between 1-3000 only" << endl;
				}
				 
			}
			break;
			
			case 3: 
				exit(1);
				break;
		 	
		 	default:cout << "Invalid input!" << endl;
		 	
		 }
	
	return 0;
}
