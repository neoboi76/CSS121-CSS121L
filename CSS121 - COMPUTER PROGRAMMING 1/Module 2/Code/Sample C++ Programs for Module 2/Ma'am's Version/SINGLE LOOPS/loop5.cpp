#include<iostream>
#include<iomanip>
#include<cctype>
using namespace std;

int main()
{
	//declaration
	const int size=10;
	char let;
	int count;
	int vows=0,cons=0;
	//executable
	
	cout<<"enter "<<size<<" characters"<<endl;
	for(count=1;count<=size;count++)
	{
		
		  do{
		  	       cin>>let;//A-Z,a-z  1...$
		  	       
		  	       if(!(isalpha(let)))//1
		  	         cout<<"not an alphabet..re-enter"<<endl;
		  	         
		  }while(!(isalpha(let)));
	    	
	    	let=tolower(let);//5
	    	
		  if(let=='a'||let=='e'||let=='i'||let=='o'||let=='u')
		      vows++;
		  else
		      cons++;
		
	}
	
	cout<<"vowels ="<<vows<<endl
	    <<"consonants ="<<cons<<endl;
	
}
