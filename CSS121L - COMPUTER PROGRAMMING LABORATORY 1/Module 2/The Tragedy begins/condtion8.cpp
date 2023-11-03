/*Using switch case, create a program that will 
prompt the user to enter 2 integer numbers ask 
what arithmetic expression she/he wants to process 
Enter two Nos:5
6
******MENU******
Press 1 for Addition
Press 2 for Subtraction
Press 3 for Multiplication
Press 4 for Division
Press 5 for Modulus Division
*****************
1
Addition: 5+6 =11
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//declaration statement
	 int x, y;
	 char inp;
	//executable statement
	cout << "Enter two Nos: " << endl;
	cin >> x;
	cin >> y;

	
	cout<<"******MENU******"<<endl
	    <<"Press 1 Addition"<<endl
	    <<"Press 2 Subtraction"<<endl
	    <<"Press 3 Division"<<endl
	    <<"Press 4 Multiplication"<<endl
	    <<"Press 5 Modulus Division"<<endl
	    <<"****************"<<endl
		<<"Enter your choice: ";
		cin >> inp;
		
	switch(inp) {
		case '1':
			cout << "Addition: " << x << "+" << y << "=" << x + y << endl;
			break;
		case '2':
			cout << "Subtraction: " << x << "-" << y << "=" << x - y << endl;
			break;
		case '3':
			cout << fixed << setprecision(2);
			cout << "Division: " << x << "/" << y << "=" << x / y << endl;
			break;
		case '4':
			cout << "Multiplication: " << x << "*" << y << "=" << x * y << endl;
			break;
		case '5':
			cout << "Modulus Division: " << x << "%" << y << "=" << x % y << endl;
			break;
		default: cout << "Invalid choice!" << endl;
	}
		
	return 0;
}
