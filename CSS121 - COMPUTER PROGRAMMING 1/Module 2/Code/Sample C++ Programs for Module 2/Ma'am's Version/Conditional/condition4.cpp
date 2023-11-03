/*
Make a program that will enter a letter or a character. 
Determine if the input character is a vowel 
or a consonant

Sample output:
Enter a character: a
You have Entered a VOWEL letter!

*/

#include<iostream>
#include<cctype>
#include<cstdlib>
using namespace std;

int main()
{
	//declaration statement
	 char let;
	//executable statement
	  cout<<"enter a character:";
	  cin>>let;//a
	  
	  
	  
	  if(isalpha(let))
	  {
	  	   let=toupper(let);//A
	  	   
		   if(let=='A'||let=='E'||let=='I'||let=='O'||
		    let=='U')
		     cout<<let<<" is vowel"<<endl;
		   else
		     cout<<let<<" is a consonant"<<endl;
	  }
	  
	  else
	    cout<<let<<" is not a letter!";
}
