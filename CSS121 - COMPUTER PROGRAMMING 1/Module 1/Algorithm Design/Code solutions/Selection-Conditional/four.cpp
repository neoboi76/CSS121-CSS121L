/* Problem #4

LabC9. Family restaurant gives discounts for their valued customers on their 25th anniversary. Below are the discounts and the amount to be purchased by the customer:

Php1500  - above: 7.5%
Php1000  –  Php1499: 6.55%
Php500 – Php999: 5.5.%
Php250 – Php499: 4.5%
Below 250 – No discount
 */

#include <iostream>
using namespace std;

int main()
{

  double amount;
  double discount;
  double tolAm;

  cout << "Input amount given: " << endl;

  cin >> amount;

  if (amount >= 1500)
  {

    discount = 0.075;
    tolAm = amount - (amount * discount);
  }

  else if (amount >= 1000 && amount <= 1499)
  {

    discount = 0.065;
    tolAm = amount - (amount * discount);
  }

  else if (amount >= 500 && amount <= 999)
  {

    discount = 0.055;
    tolAm = amount - (amount * discount);
  }

  else if (amount >= 250 && amount <= 499)
  {

    discount = 0.045;
    tolAm = amount - (amount * discount);
  }

  else
  {

    tolAm = amount;
  }

  cout << "Amount Purchased: " << amount << endl;
  cout << "Discount: " << discount * 100 << endl;
  cout << "Total Amount: " << tolAm << endl;

  return 0;
}