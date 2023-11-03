/*
PATTERN MASTERLIST
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char rChoice; // choice to restart the program ro not
	
	do
	{ 
		// VALUES ARE INITIALIZED INSIDE THE LOOP FOR IT TO BE RESET
		
		// menu
		int mChoice;       // menu choice
		
		// For the Patterns
		int rowSize=1;       // user inputted right triangle size
		int col=1,row=1; 		
		int space=0;
		
		system("cls"); // resets the program
		
		cout<<"================================="<<endl
			<<setw(18)<<"MENU"<<endl
			<<"================================="<<endl
			<<"[1] SQUARE/RECTANGLE"<<endl
			<<"[2] HOLLOW SQUARE/RECTANGLE"<<endl
			<<"[3] RIGHT TRIANGLE"<<endl
			<<"[4] Mirrd&Invrtd RIGHT TRIANGLE"<<endl
			<<"[5] PYRAMID"<<endl
			<<"[6] DIAMOND"<<endl
			<<"[7] HOURGLASS"<<endl
			<<"[8] BUTTERFLY"<<endl
			<<"[9] BOW"<<endl
			<<"[10] X PATTERN"<<endl
			<<"[11] LESS THAN SYMBOL"<<endl
			<<"================================="<<endl;
		cout<<"Enter your choice: "; 
		cin>>mChoice;
		
		cout<<endl;
		
		switch(mChoice)
		{ // start switch
			case 1:
				{ // start case 1
					system("cls"); // clears the menu when a choice is made
					
					cout<<"=============================="<<endl
					    <<"       SQUARE/RECTANGLE"<<endl
					    <<"=============================="<<endl;
					cout<<"Enter # of rows: ";
					cin>>rowSize;
					
					cout<<endl;
					
					for(row=1;row<=rowSize;row++)
					{
						for(col=1;col<=rowSize;col++)
						{
							cout<<"* ";
						}
						cout<<endl;
					}
				} // end case 1
				break;
			case 2:
				{
					system("cls"); // clears the menu when a choice is made
					
					cout<<"=============================="<<endl
					    <<"   HOLLOW SQUARE/RECTANGLE"<<endl
					    <<"=============================="<<endl;
					cout<<"Enter # of rows: ";
					cin>>rowSize;
					
					cout<<endl;
					
					for(row=1;row<=rowSize;row++)
					{
						for(col=1;col<=rowSize;col++)
						{
							if(col==1 || col==rowSize || row==1 || row==rowSize)
								cout<<"*";
							else
								cout<<" ";
						}	
						cout<<endl;
					}
				}
				break;
			case 3:
				{
					system("cls"); // clears the menu when a choice is made
					
					cout<<"=============================="<<endl
					    <<"        RIGHT TRIANGLE"<<endl
					    <<"=============================="<<endl;
					cout<<"Enter # of rows: ";
					cin>>rowSize;
					
					cout<<endl;
					
					for(row=1;row<=rowSize;row++)
					{
						for(col=1;col<=row;col++)
						{
							cout<<"* ";
						}
						cout<<endl;
					}
				}
				break;
			case 4:
				{
					system("cls"); // clears the menu when a choice is made
					
					cout<<"================================="<<endl
					    <<"MIRRORED INVERTED RIGHT TRIANGLE"<<endl
					    <<"================================="<<endl;
					cout<<"Enter # of rows: ";
					cin>>rowSize;
					
					cout<<endl;	
					
					for(row=rowSize;row>=1;row--)
					{
						for(space=rowSize-row;space>0;space--)
						{
							cout<<" ";
						}
						for(col=row;col>0;col--)
						{
							cout<<"*";
						}
						cout<<endl;
					}
				}
				break;
			case 5:
				{
					system("cls"); // clears the menu when a choice is made
						
						cout<<"==============================="<<endl
						    <<"            PYRAMID"<<endl
						    <<"==============================="<<endl;
						cout<<"Enter # of rows: ";
						cin>>rowSize;
						
						cout<<endl;	
						
						for(row=1;row<=rowSize;row++)
						{
							for(space=rowSize-row;space>0;space--)
							{
								cout<<" ";
							}
							for(col=1;col<=row;col++)
							{
								cout<<"* ";
							}
							cout<<endl;
						}
				}
				break;
			case 6:
				{
					system("cls"); // clears the menu when a choice is made
						
						cout<<"==============================="<<endl
						    <<"            DIAMOND"<<endl
						    <<"==============================="<<endl;
						cout<<"Enter # of rows: ";
						cin>>rowSize;
						
						cout<<endl;	
						
						//upper part
						for(row=1;row<=rowSize;row++)
						{
							for(space=rowSize-row;space>0;space--)
							{
								cout<<" ";
							}
							for(col=1;col<=row;col++)
							{
								cout<<"* ";
							}
							cout<<endl;
						}
						//lower part
						for(row=rowSize;row>=1;row--)
						{
							for(space=rowSize-row;space>0;space--)
							{
								cout<<" ";
							}
							for(col=row;col>=1;col--)
							{
								cout<<"* ";
							}
							cout<<endl;
						}
				}
				break;	
			case 7:
				{
					system("cls"); // clears the menu when a choice is made
						
						cout<<"==============================="<<endl
						    <<"            HOURGLASS"<<endl
						    <<"==============================="<<endl;
						cout<<"Enter # of rows: ";
						cin>>rowSize;
						
						cout<<endl;	
						
						//upper part
						for(row=rowSize;row>=1;row--)
						{
							for(space=rowSize-row;space>0;space--)
							{
								cout<<" ";
							}
							for(col=row;col>=1;col--)
							{
								cout<<"* ";
							}
							cout<<endl;
						}
						//lower part
							for(row=1;row<=rowSize;row++)
						{
							for(space=rowSize-row;space>0;space--)
							{
								cout<<" ";
							}
							for(col=1;col<=row;col++)
							{
								cout<<"* ";
							}
							cout<<endl;
						}
				}
				break;
			case 8:
				{
					system("cls"); // clears the menu when a choice is made
						
						cout<<"==============================="<<endl
						    <<"           BUTTERFLY"<<endl
						    <<"==============================="<<endl;
						cout<<"Enter # of rows: ";
						cin>>rowSize;
						
						cout<<endl;	
						
						//upper part
						for(row=1;row<=rowSize;row++)
						{
							for(col=1;col<=row;col++)
							{
								cout<<"*";
							}
							for(space=(rowSize-row)*2;space>0;space--)
							{
								cout<<" ";
							}
							for(col=1;col<=row;col++)
							{
								cout<<"*";
							}
							cout<<endl;
						}
						//lower part
						for(row=rowSize;row>=0;row--)
						{
							for(col=row;col>=1;col--)
							{
								cout<<"*";
							}
							for(space=(rowSize-row)*2;space>0;space--)
							{
								cout<<" ";
							}
							for(col=row;col>=1;col--)
							{
								cout<<"*";
							}
							cout<<endl;
						}
				}
				break;
			case 9:
				{
					system("cls"); // clears the menu when a choice is made
						
						cout<<"==============================="<<endl
						    <<"             BOW"<<endl
						    <<"==============================="<<endl;
						cout<<"Enter # of rows: ";
						cin>>rowSize;
						
						cout<<endl;	
						
						//upper part
						for(row=1;row<=rowSize;row++)
						{
							for(space=rowSize-row;space>0;space--)
							{
								cout<<" ";
							}
							for(col=1;col<=row;col++)
							{
								if(col==1 || col==row || row==1 || row==rowSize)
								cout<<"*";
								else
								cout<<" ";
							}
							cout<<endl;
						}
						
						//lower part
						for(row=rowSize-1;row>=1;row--)
						{
							for(space=rowSize-row;space>0;space--)
							{
								cout<<" ";
							}
							for(col=row;col>=1;col--)
							{
								if(col==1 || col==row)
								cout<<"*";
								else
								cout<<" ";
							}
							cout<<endl;
						}
				}
				break;
			case 10:
				{
						system("cls"); // clears the menu when a choice is made
						
						cout<<"==============================="<<endl
						    <<"             X PATTERN"<<endl
						    <<"==============================="<<endl;
						cout<<"Enter # of rows: ";
						cin>>rowSize;
						
						cout<<endl;	
						
						for(row=1;row<=rowSize;row++)
						{
							for(col=1;col<=rowSize;col++)
							{
								if(col==row||col==(rowSize-row+1))
								cout<<"*";
								else
								cout<<" ";
							}
							cout<<endl;
						}
				}
				break;
			case 11:
				{
						system("cls"); // clears the menu when a choice is made
						
						cout<<"==============================="<<endl
						    <<"        LESS THAN SYMBOL"<<endl
						    <<"==============================="<<endl;
						cout<<"Enter # of rows: ";
						cin>>rowSize;
						
						cout<<endl;	
						
						//upper part
						for(row=1;row<=rowSize;row++)
						{
							for(space=rowSize-row;space>0;space--)
							{
								cout<<" ";
							}
							for(col=1;col<=rowSize;col++)
							{
								cout<<"*";
							}
							cout<<endl;
						}
						
						//lower part
						for(row=rowSize-1;row>=1;row--)
						{
							for(space=rowSize-row;space>0;space--)
							{
								cout<<" ";
							}
							for(col=rowSize;col>=1;col--)
							{
								cout<<"*";
							}
							cout<<endl;
						}
				}
				break;
			default:
				system("cls");
				cout<<"Invalid Input! Please Try Again"<<endl;
				cout<<endl;
		} // end switch
		
		do
		{ // start of do while loop which asks the user to return to the main menu or not
			cout<<"Return to Main Menu? [Y/N]: ";
			cin>>rChoice;
			rChoice=toupper(rChoice); // converts choice to uppercase
		}while(rChoice!='N'&&rChoice!='Y'); // validates the input as it must be only y or n

	}while(rChoice=='Y'); // while choice is yes, continue/restart the menu
} 
