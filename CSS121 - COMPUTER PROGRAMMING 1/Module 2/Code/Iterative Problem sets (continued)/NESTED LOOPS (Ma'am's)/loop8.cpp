//NESTED LOOP
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//declaration
	const int sizeR=5;
	const int sizeC=5;
	int row,col;
	//executable
	
	cout<<left;
	cout<<"displaying an object"<<endl;
	for(row=1;row<=sizeR;row++)
	{
		for(col=1;col<=sizeC;col++)
		{
			if(col==1||row==sizeR||col==row)
			cout<<setw(6)<<"*";
		    else
		    cout<<setw(6)<<" ";
		    
		}//inner loop
		
		cout<<endl;//7
	}//outer loop
	
}
/*
 *   *   *   *
 *   *   *   *
 *   *   *   *
 
*/
