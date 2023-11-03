#include <iostream>//cin & cout
#include <iomanip>//setw()
#include <cstdlib>//exit()

using namespace std;

//Function Prototpye Declaration
void getRight();//Without return value and passing parameters
void getEx(int xsize);//Without return and with passing parameters
int getMax();//With return and without passing parameters
int getSumDig(int xNum);//With return and passing parameters

//Global Declaration
int ctr, num;

int main() {//Start of main function
	
	//Functionwide declaration of ans & choice variables
	char ans;//y or n
	int choice;//Variable enabling the user to choose from the choices below
	
	do {
		
		//Initialization/Declaration of Variables within do-while
		int sizerow;//Variable for case 2
		int max;//Variable for case 3
		int sum;//Variable for case 4
		
		//Executable
		
		do {
			system("cls");//Removes previous output in the console window
			
			cout << "***********MENU***********" << endl
			 	 << "[1] RIGHT TRIANGLE"	 	 << endl
			 	 << "[2] LETTER X"   			 << endl
			 	 << "[3] MAXIMUM NUMBER"	     << endl
			 	 << "[4] SUM OF DIGITS" 	 	 << endl
			 	 << "[5] EXIT"          		 << endl
			 	 << "*************************"  << endl;
			 
			cout << "ENTER YOUR CHOICE: ";
			cin >> choice;	
			
			} while (choice < 1 || choice > 5); //input validation choices 1-5
		
	
			
		switch(choice) {
				
			case 1:
				{//start of RIGHT TRIANGLE case
					system("cls");//Refreshes the console window each time a choice is made
					cout << "RIGHT TRIANGLE\n" << endl;
					getRight();
						
				}//end of RIGHT TRIANGLE case
				break;
					
			case 2:
				{//start of LETTER X case
				
					system("cls");
					cout << "LETTER X\n" << endl;
					
					do {
						cout << "Enter the size of Letter X [min: 5; max: 20]: ";
						cin >> num;
					   } while (num < 5 || num > 15);/*Input validation;
					   								 must be between 5 to 15 only */
					cout << endl;
					getEx(num);
					
				}//end of LETTER X case
				break;
					
			case 3:
				{//start of MAXIMUM NUMBER case
				
					system("cls");
					cout << "MAXIMUM NUMBER\n" << endl;
					
					max = getMax();
					
					cout << "\nMaximum number Entered is: " << max << endl;
				
				}//end of MAXIMUM NUMBER case
				break;
					
			case 4:
				{//start of SUM OF DIGITS case
				
					system("cls");
					cout << "SUM OF DIGITS\n" << endl;
					
					do {
						cout << "Enter a positive number: ";
						cin >> num;
					   } while (num <= 0);//Input validation; number must be positive
					cout << "\nYou have entered " << num << endl;
					
					sum = getSumDig(num);//can only compute up to nine digits
					
					cout << "\nThe sum of digits of " << num
						 << " is " << sum << endl;
					
				}//end of SUM OF DIGITS case
				break;
					
			case 5://start of EXIT case
				system("cls");
				exit(1);
				break;//end of EXIT case
				
		}//end of switch-case for the 5 choices
			
		
		do {
			cout << "\n\nReturn to Main Menu?[y/n]: ";
			cin >> ans;
			
			//converts user input (Y or N) to lowercase.
			ans = tolower(ans);
		   } while (ans != 'y' && ans != 'n');/*if ans does not equal y or n, 
		   									  prompt is repeated.*/
		
		system("cls");//Refreshes the console after the user inputs y or n
		
		//while ans == 'y', the program will continue to run
		} while (ans == 'y');
	
	return 0;
	
}//End of Main function

////////////////////////////////////////////////

//Function Definitions

void getRight() {//start of getRight function
	
	//Functionwide initialization/declaration
	int row, col;
	char letter;
	
	do {
		cout << "Enter the Size of Right Triangle [min: 4]: ";
		cin >> num;
	   } while (num < 4);//Input validation; num must be at least 4 or above
		
		cout << endl;
		//creates rows for the right triangle
		for (row = 1; row <= num; row++) {
	
			//creates columns for the right triangle relative to the rows
			for (col = 1, letter = 'a'; col <= row; col++, letter++) {
				cout << setw(4) << letter;
			}//inner loop
			
			//breaks off each row forming new rows
			cout << endl;
			
		}//outer loop
	
}//end of getRight function

////////////////////////////////////////////////

void getEx(int xsize) {//start of getEx function
	
	//Functionwide initialization/declaration
	int row, col;
	
	cout << endl;
	
	//creates rows according to xsize
	for (row = 1; row <= xsize; row++) {
	
		cout << "\t\t\t";
		//creates columns according to xsize
		for (col = 1; col <= xsize; col++) {
			
			//a perfect 'X' is formed when xsize is even
			//If the following condition is satisfied, a letter "x" is printed out
			if (col == row || row == (xsize - col) + 1) {
				cout << setw(4) << "x ";
			}
			
			//else a blank is printed out
			else {
				cout << setw(4) << " ";
			}
			
		}//inner loop
		
		
		//breaks of each row forming new rows
		cout << endl;
		cout << endl;
		
	}//outer loop

	

}//end of getEx function

////////////////////////////////////////////////

int getMax() {//start of getMax function

	//Functionwide initialization/declaration
	int highest, lowest;
	
	cout << "Enter 5 numbers\n";
	
	//5 numbers input loop
	for (ctr = 1; ctr <= 5; ctr++) {
		
		cout << "Number[" << ctr << "]: ";
		cin >>  num;
	
		lowest = num;//First input set initially to lowest
	
		//if num is greater than highest (initially no value), thenn highest = num
		if (num > highest) {
			highest = num;
		}
		
		//else if num is lower than lowest, it is set to lowest
		else if (num < lowest) {
			lowest = num;
		}
		
	}//outer loop
	
	return highest;
	
}//end of getMax function

int getSumDig(int xNum) {//start of getSumDig function
	
	//Functionwide initialization/declaration
	int fsum, rem;
	
	//while xnum is not == 0, the loop will continue
	for (ctr = 1; xNum != 0; ctr++) {
		
		rem = xNum % 10;//extracts ones digit
		xNum /= 10;//removes current ones digit and is replaced
		fsum += rem;//adds extracted digit to fsum variable
		
	}//end of loop
	
	return fsum;

}//end of getSumDig function
