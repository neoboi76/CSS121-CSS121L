#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
//declaration
	int num1,num2;
	//executable
	
	cout<<"number series "<<endl;
	for(num1=1,num2=1;num2<=55;num1=num1+num2,num2=num2+num1)//num2=num2+5
	    cout<<num1<<" "<<num2<<" ";
	
}
