/*
October 1, 2020 falls on a Thursday.  
Make a program  that would input a numeric day 
(1-31 only) and output the day of the week the 
day falls.  For example, if 18 is entered for the day, 
the program must display “SUNDAY”, if 20 was entered, 
“TUESDAY” must be displayed and so on.

Use an if else statement solution
*/

#include<iostream>
using namespace std;

int main()
{
	//declaration statement
	int day,rem;
	//executable statement
	cout<<"enter numeric day for october 2020 (1-31):";
	cin>>day;
	
	if(day>=1&&day<=31)
	{
		rem=day%7;
		if(rem==0)
		  cout<<"Wednesday"<<endl;
		else if(rem==1)
		  cout<<"Thursday"<<endl;
		else if(rem==2)
		  cout<<"Friday"<<endl;
		else if(rem==3)
		  cout<<"Saturday"<<endl;
		else if(rem==4)
		  cout<<"Sunday"<<endl;
		else if(rem==5)
		  cout<<"Monday"<<endl;
		else
		  cout<<"Tuesday"<<endl;
	}
	
	else
	  cout<<day<<" is not valid!";
}
