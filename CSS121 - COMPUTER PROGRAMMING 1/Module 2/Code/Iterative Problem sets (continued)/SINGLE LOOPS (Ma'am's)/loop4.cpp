#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//declaration
	 const int size=5;
	 int num,count,even,odd;
	 char ans;
	//executable
	
	do{
		  system("cls");//clearscreen
			cout<<"enter "<<size<<" numbers"<<endl;
			//initialize odd and even
		odd=0;
		even=0;
			cout<<odd<<" "<<even<<endl;
		  	for(count=1;count<=size;count++)
			{
				cin>>num;
				  if(num%2==0)
				    even++;
				  else 
				    odd++;
			}
			
		
			
			cout<<"even numbers ="<<even<<endl
			    <<"odd numbers ="<<odd<<endl;
			    
			    
		   do{
		   	    cout<<"do you want to try again?[y/n]:";
		  		 cin>>ans;//y
		   		ans=tolower(ans);//y
		   	
		   }while(ans!='y'&&ans!='n');	 //f&&T   
			    
			    
			    
		   
		   

	}while(ans=='y');
	
	
	cout<<"end of program"<<endl;
	
	
}
