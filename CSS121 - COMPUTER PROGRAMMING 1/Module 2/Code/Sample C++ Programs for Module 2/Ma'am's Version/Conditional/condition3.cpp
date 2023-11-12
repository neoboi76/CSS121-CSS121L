/*
Workers at Kookaburra Factory have a regular 
working hours of 40 hours per week and are 
paid Php 50.00 per hour.  However, if the workers 
rendered more than 40 hours per week, the excess 
hours are paid 75% more.  
Create a program that would input the number 
of hours rendered by a worker in one week 
output his net salary. 
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//declaration statement
	 const double regRate=50.00;
	 const double otRate=87.50;
	 double hours,netSal;
	//executable statement
	cout<<"enter hours rendered:";
	cin>>hours;
	
	if(hours<=40)
	   netSal= hours*regRate;
	else 
	   netSal=2000+(hours-40)*otRate;
	   
	cout<<fixed<<setprecision(2);
	cout<<"net salary is Php"<<netSal<<endl;
}
