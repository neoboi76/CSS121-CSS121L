/*
October 1, 2020 falls on a Thursday.  
Make a program  that would input a numeric day 
(1-31 only) and output the day of the week the 
day falls.  For example, if 18 is entered for the day, 
the program must display “SUNDAY”, if 20 was entered, 
“TUESDAY” must be displayed and so on.

Use switch case solution
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
	//35
	if(day>=1&&day<=31)
	{
		rem=day%7;
		
		switch(rem)
		{
		   case 0:cout<<"Wednesday"<<endl;
		   break;
		   case 1:cout<<"Thursday"<<endl;
		   break;
		   case 2:cout<<"Friday"<<endl;
		   break;
		   case 3:cout<<"Saturday"<<endl;
		   break;
		   case 4:cout<<"Sunday"<<endl;	
		   break;
		   case 5:cout<<"Monday"<<endl;
		   break;
		   case 6: cout<<"Tuesday"<<endl;
		   break;//optional
		  
		}
	}
	else
	  cout<<day<<" is not valid!"<<endl;
	  
}
