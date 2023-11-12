#include <iostream>

using namespace std;

int main() {
	
	int x = 10;
	
	//Pointers refer to "addresses" of other variables
	
	int *px = &x;//*px defines a pointer variable and assigns the address of x;
	//Note that & is called address operator. Recall how we define references.
	
	//Basically pointers are variables that store references haha.
	
	cout << px << endl;//prints address of x contained within px in hexadecimal
	
	/*If we want to print the value of x itself, we must "Dereference" px.
	Please just google "Dereference"*/
	
	cout << *px << endl;/*Dereferences px. Now it refers to the value of x itself
						rather than the address*/
	
	return 0;
	
}
