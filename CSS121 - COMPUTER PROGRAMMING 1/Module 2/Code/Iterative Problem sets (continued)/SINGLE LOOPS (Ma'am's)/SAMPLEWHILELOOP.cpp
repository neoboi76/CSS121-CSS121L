#include<iostream>
using namespace std;

int main()
{  
//loop while
     int num;//input 5 numbers
	 int count;//count 1-5
	 int sum=0;
	 
	 cout<<"enter 5 numbers"<<endl;
	 
	 count=1;
	 while(count<=5)
	 {
	 	cout<<"number["<<count<<"]:";
	 	cin>>num;//5
	 	sum=sum+num;
	 	
	 	count=count+1;
	 }//end while
	 	
	cout<<"sum="<<sum<<endl;
	system("pause");
	return 0;
}
