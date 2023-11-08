// Sample program showcasing the functions of fstream

#include <fstream>

const double regHrs = 40.0;
const double overPay = 1.75;

using namespace std;

int main()
{
  // Declare file stream variables such as the following
  ifstream inRate, inHrs; 
  ofstream outData;

  double hrs, rate, netSal;

  // Open the files
  inRate.open("rate.dat"); // open the input file
  inHrs.open("hours.dat");
  outData.open("prog.out"); // open the output file

  // Code for data manipulation
  inRate >> rate;
  inHrs >> hrs;

  if (hrs > regHrs)
  {
    netSal = ((hrs - regHrs) * rate) * overPay + (regHrs * rate);
  }

  else
  {
    netSal = rate * hrs;
  }

  outData << netSal << endl;

  // Close files
  inRate.close();
  inHrs.close();
  outData.close();

  return 0;
}