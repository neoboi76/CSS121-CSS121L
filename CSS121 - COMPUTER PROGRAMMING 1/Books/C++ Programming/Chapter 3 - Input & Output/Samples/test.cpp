#include <iostream>
#include <fstream>

using namespace std;

const double regHrs = 40;
const double overPay = 1.75;

int main()
{
  double hrs, rate, netsal;
  // Recording information
  ofstream usrInput;
  usrInput.open("word.txt");

  cout << "Enter hours rendered: ";
  cin >> hrs;

  cout << "Enter current rate per hour: ";
  cin >> rate;

  usrInput << "Hours rendered: " << hrs << endl;
  usrInput << "Rate per hour: " << rate << endl;

  if (hrs > regHrs)
  {
    netsal = ((hrs - regHrs) * rate) * overPay + (rate * regHrs);
  }

  else
  {
    netsal = rate * hrs;
  }

  cout << "Net salary is: " << netsal << endl;
  usrInput << "Net salary is: " << netsal << endl;

  usrInput.close();

  return 0;
}