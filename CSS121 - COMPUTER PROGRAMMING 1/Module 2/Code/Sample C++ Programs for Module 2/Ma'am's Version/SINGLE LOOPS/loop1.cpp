/*FOR  LOOP
   for(initialization-x=1;condition-x<=10;altering-x++)
      {
          statements;
      }
      
      
  initialization;
  while(condition)
  {
       statement(s);
       
       altering
  }
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//declaration
	int num1,num2;
	//executable
	
	cout<<"number series "<<endl;
	/*for(num1=10,num2=5;num2<=25;num1--,num2+=5)//num2=num2+5
	    cout<<num1<<" "<<num2<<" ";*/
	    
	num1=10;
	num2=5;
	while(num2<=25)
	{
		  cout<<num1<<" "<<num2<<" ";
		  num1--;
		  num2=num2+5;
	}
}
