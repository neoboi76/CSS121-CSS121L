#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//Function Prototpye Declaration
void getFactors();
void multTable(int fsizerow, int fsizecol);
int isPrime();
long long getFactorial(long long n);

//Global Declaration
int ctr;
long long num;

int main() {//Start of main function
	
	//Functionwide declaration of ans & choice variables
	char ans;//y or n
	int choice;//Variable enabling the user to choose from the choices below
	
	do {
		
		//Initialization/Declaration of Variables within main
		int sizerow, sizecol;//Variables for case 2
		int primeFac;//Variable for case 3
		long long outFactorial;//Variable for case 4
		
		do {
			system("cls");//Removes previous i/o in the console window
			//Executable
			cout << "===========MENU===========" << endl
			 	 << "[1] Getting the Factors" 	 << endl
			 	 << "[2] Multiplication Table"   << endl
			 	 << "[3] Prime or not Prime"     << endl
			 	 << "[4] Getting the factorial"  << endl
			 	 << "[5] Exit"          		 << endl
			 	 << "========================="  << endl;
			 
			cout << "Select your choice: ";
			cin >> choice;	
			
			} while (choice < 1 || choice > 5); //input validation choices 1-5
		
	
			
		switch(choice) {
				
			case 1:
				{//start of Getting the Factors case
					system("cls");//Refreses the console window each time a choice is made
					cout << "Getting the Factors\n" << endl;
					getFactors();
						
				}//end of Getting the Factors case
				break;
					
			case 2:
				{//start of Multiplication Table case
					system("cls");
					cout << "Multiplication Table\n" << endl;
					
					do {
						cout << "Enter size of row [min: 5; max: 20]: ";
						cin >> sizerow;
					   } while (sizerow < 5 || sizerow > 20);//Input validation 5-20
					
					
					do {
						cout << "Enter size of column [min: 5; max: 20]: ";
						cin >> sizecol;
					   } while (sizecol < 5 || sizecol > 20);//Input validation 5-20
					
					multTable(sizerow, sizecol);//Passing args sizerow and sizecol into function
						
				}//end of Multiplication Table case
				break;
					
			case 3:
				{//start of Prime or not Prime case
					system("cls");
					primeFac = isPrime();
					
					if (primeFac == 1) {
						cout << " is a Prime"  << endl;
					}
					
					else if (primeFac == -1){
						cout << " is not a Prime" << endl;
					}
				}//end of Prime or not Prime case
				break;
					
			case 4:
				{//start of Factorial case
					system("cls");
					do {
						cout << "Enter a non-negative number: ";
						cin >> num;
					   } while (num < 0);//Input validation; num must be either 1 or 0 only.
					
					cout << "Factorial of " << num << " is ";
					
					outFactorial = getFactorial(num);
					
					cout << " = " << outFactorial << endl;
					
				}//end of Factorial case
				break;
					
			case 5://start of exit case
				system("cls");
				exit(1);
				break;//end of exit case
				
			}//end of switch-case for the 5 choices
			
		
		do {
			cout << "\n\nTRY AGAIN?[y/n]: ";
			cin >> ans;
			
			//converts user input (Y or N) to lowercase.
			ans = tolower(ans);
		   } while (ans != 'y' && ans != 'n');
		
		system("cls");//Refreshes the console after the user inputs y or n
		
		//while ans == 'y', the program will continue to run
		} while (ans == 'y');
	
	return 0;
	
}//End of Main function

////////////////////////////////////////////////

//Function Definitions

void getFactors() {//start of getFactors function
	
	do {
		cout << "Enter a positive number: ";
		cin >> num;
	   } while (num <= 0);//Input validation; num must be either 0 or 1 only
	
	cout << "The factors of " << num << " is/are: ";
	
	//loop that generates a number's factors
	for (ctr = 1; ctr <= num; ctr++) {
		
		if (num % ctr == 0) {
			cout << ctr << ',' << ' ';
		}//inner condition
		
	}//outer loop
	
}//end of getFactors function

////////////////////////////////////////////////

void multTable(int fsizerow, int fsizecol) {//start of multTable function
	
	int row, col;
	
	cout << "\nDisplaying a " << fsizerow << "x" << fsizecol
	     << " Multiplication Table" << endl;
	    
    //Loop creates the rows depending on the size
	for (row = 1; row <= fsizerow; row++) {
		
		//columns are created relative to the rows in each given iteration
		for (col = 1; col <= fsizecol; col++) {
			cout << setw(7) << col * row;
		}//inner loop
		
		//new rows are created by moving the columns produced by the inner loop to the next line.
		cout << endl;
		
	}//outer loop
	
}//end of multTable function

////////////////////////////////////////////////

int isPrime() {//start of isPrime function
	
	int factors = 0;
	
	do {
		cout << "Enter a positive number: ";
		cin >> num;
	   } while (num <= 0);//Input validation; num must be positive.
	
	//Loop testing potential factors
	for (ctr = 1; ctr <= num; ctr++) {
		/*if statement that identifies factors of a given number of
		each iteration until num is reached (1, 2, 3,...etc.)*/
		if (num % ctr == 0) {
			factors++;
		}//inner condition
		
	}//outer loop
	
	//if factor is == 2, then it is a prime number (return 1). Otherwise, not a prime
	if (factors == 2) {
		cout << num;
		return 1;
	}
	
	else {
		cout << num;
		return -1;
	}
	
	
	
}//end of isPrime function

long long getFactorial(long long n) {//start of getFactorial function
	
	long long out = 1;
	
	//Loop that generates the factorial 
	for (ctr = n; ctr >= 1; ctr--) {
		cout << ctr;
		if (ctr > 1) cout << '*';//inner condition
		out *= ctr;
	}//loop
	
	return out;
}//end of getFactorial function
