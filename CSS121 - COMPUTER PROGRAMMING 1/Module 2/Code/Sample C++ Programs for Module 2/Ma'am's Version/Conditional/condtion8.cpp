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
	 char choice;
	 int num1,num2;
	//executable statement
	cout<<"enter first number:";
	cin>>num1;
	cout<<"enter second number:";
	cin>>num2;
	cout<<endl;
	
	cout<<"******MENU******"<<endl
	    <<"press 1 addition"<<endl
	    <<"press 2 subtraction"<<endl
	    <<"press 3 division"<<endl
	    <<"press 4 multiplication"<<endl
	    <<"press 5 modulus div"<<endl
	    <<"****************"<<endl
		<<"enter your choice:";
		
	cin>>choice;
	  switch(choice)
	  {
	  	case '1': cout<<"addition"<<endl;
	  	          cout<<num1<<"+"<<num2<<"="<<num1+num2
	  	              <<endl;
	  		break;
	  	case '2':cout<<"subtraction"<<endl;
	  	          cout<<num1<<"-"<<num2<<"="<<num1-num2
	  	              <<endl;
	  		break;
	  	case '3': cout<<fixed<<setprecision(2);
		          cout<<"division"<<endl;
	  	          cout<<num1<<"/"<<num2<<"="
					  <<static_cast<double>(num1)/num2
	  	              <<endl;
	  		break;
	  	case '4':cout<<"multiplication"<<endl;
	  	          cout<<num1<<"*"<<num2<<"="<<num1*num2
	  	              <<endl;
	  		break;
	  	case '5':cout<<"modulus division"<<endl;
	  	          cout<<num1<<"%"<<num2<<"="<<num1%num2
	  	              <<endl;
	  		break;
	  	default:cout<<"invalid choice!"<<endl;
		  
	  }
	
}

