#include<iostream>
using namespace std;

int main()
{
     int num;
     int sum;
     int count;
     const int size=5;
     char ans;
   do{
   
     cout<<"enter 5 positive numbers\n";
     sum=0;
     for(count=1;count<=size;count++)
     {
     	do{
		 
	     	cout<<"number["<<count<<"]:";
	     	cin>>num;
	     	
			 if(num<=0)    
			   cout<<"number must be positive.re-enter\n";
			   
     	
          }while(num<=0);
     	sum=sum+num;
     	
	 }
	   
	   cout<<"SUM="<<sum<<endl;
       do{
	   
	   cout<<"Try again?[y/n]:";
       cin>>ans;
       ans=toupper(ans);
          if(ans!='Y'&& ans!='N')
            cout<<"Y and N only..re-enter\n";
   }while(ans!='Y'&& ans!='N');
       
    }while(ans=='Y');
	cout<<endl;
	system("pause");
	return 0;
}
