/*
Given 2 values X and Y. Create a 
program that will determine the 
difference bet. X & Y. If X-Y is 
negative, compute R=X+Y; if X-Y is zero, 
compute R=2X+2Y; and if X-Y is positive, 
compute R=X*Y. Print out the values of X,Y and R.

*/

#include<iostream>
using namespace std;

int main()
{
	//declaration statement
	int x,y,r,diff;
	
	//executable statement Input-process-output
	cout<<"input value for x:";
	cin>>x;
	cout<<"input value for y:";
	cin>>y;
	
	//process difference of x -y
	diff=x-y;
	
	if(diff<0)
	  r=x+y;
	else if(diff==0)
	  r=2*x+2*y;
	else
	  r=x*y;
	  
	cout<<"x="<<x<<endl
	    <<"y="<<y<<endl
	    <<"r="<<r<<endl;
	
	return 0;
}
