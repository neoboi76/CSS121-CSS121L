#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <sstream>

using namespace std;

unsigned int binaryConversion(unsigned long long n)
{

  int rem = 0;
  int bits = 0;
  int rev = 0;
  stringstream bin;
  

  cout << "Binary number is: ";
  
  for (int i = 0; n != 0; i++) {
  	rem = n % 2;
  	n /= 2;
	bin << rem;
  }

}

int main()
{

  unsigned long long num;

  cout << "Enter a number: ";
  cin >> num;

  binaryConversion(num);

  return 0;
}
