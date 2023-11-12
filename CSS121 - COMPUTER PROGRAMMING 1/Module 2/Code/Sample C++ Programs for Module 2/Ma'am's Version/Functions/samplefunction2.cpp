//function NO RETURN NO PASSING PARAMETER
/*
a program that will do the following:
      MENU
    [1] input 5 numbers and get the average
    [2] base/exp
    [3] input 2 numbers and get the highest
    [4] c^2=a^2+b^2 compute for c
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

 int num1,num2;
//protoyping function
void getAve();
void baseExp(double x,double y);
int getHigh();
double getPita(double a,double b);

int main()
{
	int choice;
	cout<<"_____MENU______\n"
	    <<"[1] get average\n"
	    <<"[2] base^exp\n"
	    <<"[3] get highest number\n"
	    <<"[4] pythagorean\n"
	    <<"________________\n"
	    <<"enter your choice:";
	cin>>choice;
	  
	  switch(choice)
	  {
	  	case 1://NO RETURN NO PASSING PARAM
	  	        //call the function
	  	          getAve();
	  		break;
	  	case 2://NO RETURN WITH PASSING PARAM
	  	      
	  	       cout<<"enter 2 numbers:";
	  	       cin>>num1>>num2;
	  	       
	  	         baseExp(num1,num2);
	  		break;
	  	case 3://WITH RET NO PASSING PARAM
	  	         int mataas;
	  	         mataas=getHigh();
	  	         cout<<"highest is "<<mataas;
	  		break;
	  	case 4://WITH RET WITH PASSING PARAM
	  	         double nu1,nu2;
				 double sagot;
				   cout<<"enter 2 numbers:" ;
	  	         cin>>nu1>>nu2;
	  	         sagot=getPita(nu1,nu2);
	  	         cout<<fixed<<setprecision(2);
	  	         cout<<"C="<<sagot<<endl;
	  	
	  		break;
	  }
	
	
	cout<<endl;
	system("pause");
	return 0;
}//end main
////////////////////////////////////
void getAve()
{
	int num;//input 5 numbers
	int count;//count 1-5
	const int size=5;
	int sum=0;
	double ave;
	
	cout<<"enter"<<size<<"numbers\n";
	for(count=1;count<=size;count++)
	{
		cin>>num;
		sum=sum+num;
	}
	
	ave=double(sum)/size;
	
	cout<<fixed<<setprecision(3);
	cout<<"average is "<<ave<<endl;
	
}
////////////////////////////////////
void baseExp(double x,double y)
{
	double z;
	z=pow(x,y);
	
	cout<<"answer is "<<z<<endl;
	
}
/////////////////////////////////////
int getHigh()
{

	int high;
	
	cout<<"enter 2 numbers:";
	cin>>num1>>num2;
	
	if(num1>num2)
	   high=num1;
	else
	   high=num2;
	   
	return high;
	 
}
///////////////////////////////////////
double getPita(double a,double b)
{
	double c;
	
	c=sqrt(pow(a,2)+pow(b,2));
	return c;
	
}
