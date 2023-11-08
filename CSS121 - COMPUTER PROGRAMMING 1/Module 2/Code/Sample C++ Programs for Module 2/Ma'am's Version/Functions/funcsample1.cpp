//sample function NO RETURN NO PASSING ARGUMENT

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double num;
double square;
//function definition
void squareRoot();

int main()
{
    squareRoot();
    cout<<endl;
    system("pause");
    return 0;
}//end main
//////////////////////////////////
void squareRoot()
{
            
      cout<<"enter a number:";
      cin>>num;
      
      square=sqrt(num);
     
       cout<<fixed<<setprecision(3);
       cout<<"square root ="<<square<<endl;
}//end squareRoot

