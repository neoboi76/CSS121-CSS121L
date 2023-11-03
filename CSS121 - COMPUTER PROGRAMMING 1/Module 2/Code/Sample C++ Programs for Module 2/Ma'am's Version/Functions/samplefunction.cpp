#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
//global
int ctr;
//function
double getPita(double x,double y);
int getSum();
void getAlpha();
void getLow(int a,int b);

int main()
{
	//local declaration
	char option;
	
	do{
	
	 system("cls");
	//menu
	cout<<"-----MENU-----"<<endl
	    <<"[1] compute Phytagorean"<<endl
	    <<"[2] compute 5 quizzes"<<endl
	    <<"[3] display ABCDE"<<endl
	    <<"[4] get the lowest"<<endl
	    <<"ENTER YOUR CHOICE:";
	cin>>option;
    }while(option!='1'&&option!='2'&&option!='3'&&option!='4');
	
	switch(option)
	{
		case '1'://phyta
		        {
		        	system("cls");
		          double a,b;
		          double sagot;
				  cout<<"enter values of a & b:"	;
				  cin>>a>>b;
				  
				  sagot=getPita(a,b);
				  cout<<"c="<<sagot<<endl;
				}			
		break;
		case '2'://quizzes
			   {
			   	system("cls");
			   	  int sagotSum;
			   	  sagotSum=getSum();
			   	  cout<<"SUM="<<sagotSum<<endl;
			   }
		break;
		case'3'://abcde
		system("cls");
			      getAlpha();
		break;
		case'4'://lowest
			{
				system("cls");
				int num1,num2;
				cout<<"enter 2 numbers"<<endl;
				cin>>num1>>num2;
				
				getLow(num1,num2);
			}
	}
}
/////////////////////////////////
double getPita(double x,double y)
{
	//local declaration
	double c;
	
	c=sqrt(pow(x,2)+pow(y,2));
	
	return c;
}
///////////////////////////////////
int getSum()
{
	//local declaration
	int num,sum=0;
	
	cout<<"enter 5 quizzes"<<endl;
	for(ctr=1;ctr<=5;ctr++)
	{
		cin>>num;
		sum+=num;
	}
	
	return sum;
}
////////////////////////////////
void getAlpha()
{
	//local declaration
	char let;
	
	for(let='A';let<='E';let++)
	  cout<<setw(3)<<let;
	  
	  cout<<endl;
}
//////////////////////////////////
void getLow(int a,int b)
{
	//local declaration
	if(a<b)
	  cout<<a<<" is the lowest\n";
	else
	  cout<<b<<"is the lowest\n";
	  
	cout<<endl;
}
