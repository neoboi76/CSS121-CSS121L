/*
Create a program that will compute the bonus 
of employees. Consider the following criteria: 
if the employees monthly salary is <1000.00, 
the bonus is 50% of the salary; 
for the employees with salaries >=1000.00, 
the bonus is 1000.00. 
Output the corresponding bonus of the employee.

*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//declaration statement
	 const double disc=0.5;//50%
	 double mSal,bonus;
	//executable statement
	  cout<<"enter your monthly salary Php";
	  cin>>mSal;
	  
	  if(mSal<1000.00)
	    bonus=disc*mSal;
	  else 
	    bonus=1000.00;
	
	  cout<<fixed<<setprecision(3);
	  cout<<"your bonus is Php"<<bonus<<endl;
}
