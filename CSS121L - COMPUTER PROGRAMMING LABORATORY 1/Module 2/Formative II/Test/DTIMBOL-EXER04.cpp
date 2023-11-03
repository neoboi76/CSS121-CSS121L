#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>

using namespace std; 

int main() {
	
	//Functionwide initialzation/declaration of ans & choice var
	char ans;
	int choice;//Variable for choosing one of the options below
		 
	do {//beginning of do-while loop (necessary when asking the user if they want to repeat the choices)
		
		//Initialization/Declaration of variables within the do-while loop (not outside or else the values won't reset)
		
		int factors = 0, num;//Variables for PRIME NUMBER
		
		int col, row, size;//Variables for RIGHT TRIANGLE
		
		long long a, b, fib; long long series = 1;//Variables for FIBONACCI SERIES
	
	 	long long n, out = 1;//Variables for FACTORIAL
		
		//Executable
	
		cout << "**************MENU**************" << endl
		 	 << "[1] PRIME NUMBER"   			   << endl
		 	 << "[2] RIGHT TRIANGLE"			   << endl
		 	 << "[3] FIBONACCI SERIES"	   		   << endl
		 	 << "[4] FACTORIAL"                    << endl
		 	 << "[5] Exit"                         << endl
		 	 << "*****************************"    << endl;
		 
		cout << "ENTER YOUR CHOICE: ";
		cin >> choice;
		
		
		switch(choice) {//beginning of switch-case for the 5 aboveshown choices
			
			case 1: {//beginning of PRIME NUMBER case
			
    			//clears console window each time a choice is made
				system("cls");
				
				cout << "Enter a Number:  ";
				cin >> num;
				
				for (int i = 1; i <= num; i++) {
					//if statement that identifies factors of a given number of�
					//each iteration until num is reached (1, 2, 3,...etc.)
					if (num % i == 0) {
						factors++;
					}//inner condition
					
				}//outer loop
		
				//if factor is == 2, then it is a prime number. Otherwise, not a prime
				if (factors == 2) {
					cout << num << " is a Prime Number" << endl;
				}		
	
				else {
					cout << num << " is not a Prime Number" << endl;
				}
				
			}//end of PRIME NUMBER case
			break;
			
			case 2: {//beginning of RIGHT TRIANGLE case
			
				system("cls");
			
				cout << "Enter the size of Right Triangle: ";
				cin >> size;
			
				//Loop creates the rows depending on the size
				for (row = 1; row <= size; row++) {
		
					//columns are created relative to the rows in each given iteration
					for (col = 1; col <= row; col++) {
						cout << setw(3) <<  col;
					}//inner loop
					
					cout << endl; //new rows are created by moving the columns produced by the inner loop to the next line.
				}//outer loop 
				
			}//end of RIGHT TRIANGLE case
			break;
			
			case 3: {//beginning of FIBONACCI SERIES case
			
				system("cls");
			
    			//enters how many fibonacci numbers the user wants to display from (e.g., "5 = 1, 1, 2, 3, 5").
    			cout << "Enter a Number: ";
    			cin >> fib;
    			
    			//loop generating fibonacci sequence
				for (int i = 1, a = 1, b = 0; i <= fib; i++) {
        			series = a + b;//a(1) + b(0), and so on
        			cout << series << ',' << ' ';
							a = b;//a = 0, and so on
							b = series; //b = 1, and so on
    			}
			
			}//end of FIBONACCI SERIES case
			break;
			
			case 4: {//beginning of FACTORIAL case
				
				system("cls");
				
				cout << "Enter a Number: ";
    			cin >> n;
    		
    			cout << "Factorial of ";
    			//Loop that generates the factorial 
    			for (int i = n; i >= 1; i--) {
    				cout << i;
    				if (i > 1) cout << '*';//inner condition
					out *= i;
				}//outer loop
	
				cout << " is " << out << endl;
				
			}//end of FACTORIAL case
			break;
			
			case 5://beginning of EXIT case
				system("cls");
				exit(1);
				break; //end of EXIT case

			//If choice is invalid (<1 or >5), menu is displayed again
			default:system("cls"); cout << "Invalid input! Try again.\n" << endl; 
			ans = 'Y';
			continue;
		}//end of switch-case for the 5 choices
		
		//ask the user to decide whether to return to the menu or end the program.
		cout << "\nReturn to Main Menu? [Y/N]: ";
		cin >> ans;
		
		//converts user input (y or n) to uppercase.
		ans = toupper(ans);
		
		//clears console window when resetting the program
		system("cls");
		
	//while ans = 'Y', the program will continue to run
	} while (ans == 'Y');
	
	return 0;
}
