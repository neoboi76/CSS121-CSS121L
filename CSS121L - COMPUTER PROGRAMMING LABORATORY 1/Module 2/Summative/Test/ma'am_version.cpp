#include<iostream>//cin cout endl
#include<iomanip>//setw
#include<cstdlib>//exit
using namespace std;

//function declaration
void getFactors();
void getMulty(int xRow,int xCol);
int getPrime();
int getFactorial(int xnum);

//global declaration
// int num,ctr;

int main()
{
	 //declaration
	 char ans;// try again y or n
	 int opt;//option 1 -5 menu
	    
	       do{
	       	      do{
	       	      	    system("cls");
	       	      	    cout<<"==========MENU=========="<<endl
	       	      	        <<"[1] Getting the Factors"<<endl
	       	      	        <<"[2] Multiplication Table"<<endl
	       	      	        <<"[3] Prime or Not Prime"<<endl
	       	      	        <<"[4] Factorial of a Number"<<endl
	       	      	        <<"[5] Exit"<<endl
	       	      	        <<"========================="<<endl
	       	      	        <<"Select your option:";
	       	      	    cin>>opt;//1	       	      	  
					 }while(opt<1||opt>5);//input validation choices 1-5
	       	      
	       	          switch(opt)
	       	          {
	       	          	case 1:
	       	          		{
	       	          			   //no return no passing parameter
	       	          			   //IPO-function
	       	          			   cout<<"Getting the factors of a number"<<endl;
	       	          			   getFactors();
	       	          			
								 }//case1
	       	          		break;
	       	          	case 2:
	       	          		{      //no return with passing parameter
	       	          		       //I -main PO-function
	       	          		       int row,col;
	       	          		       cout<<"Displaying Multiplication Table on Screen"<<endl;
	       	          		       do{
	       	          		       	    cout<<"enter row size[5-20 only]:";
	       	          		       	    cin>>row;
										}while(row<5||row>20);
	       	          		       	       	          			
	       	          			 do{
	       	          		       	    cout<<"enter column size[5-20 only]:";
	       	          		       	    cin>>col;
										}while(col<5||col>20);
										
										getMulty(row,col);
								 }//case2
	       	          		break;
	       	          	case 3:
	       	          		{
	       	          			  //with return no passing parameter
	       	          			  //return statement -> function
	       	          			  //IP->function
	       	          			  //O-main
	       	          			  int xPrime;
	       	          			  
	       	          			  cout<<"Determine if Prime or Not Prime"<<endl;
	       	          			  
	       	          			  xPrime=getPrime();// -1 or 1
	       	          			  
	       	          			  if(xPrime==-1)
	       	          			    cout<<" is NOT PRIME"<<endl;
	       	          			  else
	       	          			    cout<<" is PRIME"<<endl;
	       	          			  
	       	          			  
	       	          			  
	       	          			
								 }//case3
	       	          		break;
	       	          	case 4:
	       	          		{
	       	          			  //with return with passing parameter
	       	          			  //return statement - function
	       	          			  //I ->main
	       	          			  //P ->function
	       	          			  //O->main
	       	          			     int num;
	       	          			     int xfactorial;
	       	          			     
	       	          			     cout<<"Getting the factorial of a Number"<<endl;
	       	          			      do{
	       	          			      	    cout<<"enter a number[0-positive only]:";
	       	          			      	    cin>>num;	       	          			      	
										   }while(num<0);
										
										cout<<"factorial of "<<num<<" is ";
	       	          			        
	       	          			        xfactorial=getFactorial(num);//120
	       	          			        
	       	          			        cout<<"="<<xfactorial<<endl;
								 }//case4
	       	          		break;
	       	          	case 5: exit(1);
	       	          		break;
	       	          			       	          	
						 }//end switch
						 
	       	         cout<<endl;
	       	       do{
	       	       	     cout<<"TRY AGAIN?[y/n]:";
	       	       	     cin>>ans;
	       	       	     ans=tolower(ans);
					  }while(ans!='y'&&ans!='n');//input validation;answerable by y or n
	       	      
		   }while(ans=='y');//try again if y
	
}//end main
////////////////////////////////////////////////
void getFactors()
{
	   int num;//input number -8
	   int ctr;//1 2 4 8
	   
	      do{
	      	    cout<<"enter number[positive only]:";
	      	    cin>>num;//8
		  }while(num<=0);
		  
		  cout<<"factors of "<<num<<" is/are:";
		  for(ctr=1;ctr<=num;ctr++)
		  {
		  	   if(num%ctr==0)
		  	     cout<<setw(5)<<ctr;
		  }//endfor  
		  
}
/////////////////////////////////////////////////
void getMulty(int xRow,int xCol)//
{
	int ir,ic;//index row and col
	
	   cout<<"displaying a "<<xRow<<"x"<<xCol<<" Multiplication Table"<<endl;
	    for(ir=1;ir<=xRow;ir++)
	    {
	    	for(ic=1;ic<=xCol;ic++)
	    	{
	    		 cout<<setw(5)<<ir*ic;
			}//inner
			cout<<endl;
		}//outer
	
}
//////////////////////////////////////////////////
int getPrime()
{
	int num;//input number -8
	int ctr;//1 2 4 8
	int count;//4
	   
	      do{
	      	    cout<<"enter number[positive only]:";
	      	    cin>>num;//3
		  }while(num<=0);
		  
		  cout<<"Number "<<num;
		  
		  count=0;
		  for(ctr=1;ctr<=num;ctr++)
		  {
		  	   if(num%ctr==0)//1 3
		  	     count++;//2
		  }//endfor  
		  
		  if(count>2)
		    return -1;
		  else
		    return 1;
}
/////////////////////////////////////////////////
int getFactorial(int xnum)
{
	  int ctr;
	  int fact;
	  
	         if(xnum==0||xnum==1)
	            fact=1;
	         else
	         {
	         	   fact=1;
	         	   for(ctr=1;ctr<=xnum;ctr++)
	         	   {
	         	   	     fact=fact*ctr;//2*3=6
	         	   	       cout<<ctr; //1*2*3*4*5*
	         	   	         if(ctr<xnum)
	         	   	           cout<<"*";
					} 
			 }//endelse
			 
		 return fact;
}
