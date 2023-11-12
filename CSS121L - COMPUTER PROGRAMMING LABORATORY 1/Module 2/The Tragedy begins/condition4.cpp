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
	char inp;
	
	cout << "Enter a character: ";
	cin >> inp;
	inp = toupper(inp);
	
	if (inp == 'A' || inp == 'E' || inp == 'I' || inp == 'O' || inp == 'U') {
		cout << "You have Entered a VOWER Letter!" << endl;
	}
	
	else {
		cout << "You have Entered a CONSONANT Letter!" << endl;
	}
	
	return 0;
	
}
