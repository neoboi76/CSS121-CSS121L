/*
   97 98 99 100 101 
   A C E G I
   
   
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//declaration
	  int num;
	  char let;
	//executable
	
	cout<<"displaying SERIES of numbers and Letters"<<endl;
	
	for(num=97;num<=101;num++)//numeric
	  cout<<num<<" ";
	  
	cout<<endl;
	
	for(let='A';let<='I';let=let+2)//character
	  cout<<let<<" ";
	
}
