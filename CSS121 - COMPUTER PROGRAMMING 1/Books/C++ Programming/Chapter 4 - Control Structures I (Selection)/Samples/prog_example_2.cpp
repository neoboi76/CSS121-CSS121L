#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <string>

using namespace std;

const double REG_HRS = 40.0;
const double OVERPAY = 1.5;
double pay;

double computePay(double h, double r);

int main()
{
    double hours, rate;

    while (true)
    {
        cout << "Enter hours: ";

        while (!(cin >> hours))
        {
            string str;
            cin.clear();
            getline(cin, str);
            cout << str << " Not a number: ";
        }

        cout << "Enter rate per hour: ";

        while (!(cin >> rate))
        {
            string str;
            cin.clear();
            getline(cin, str);
            cout << str << " Not a number: ";
        }

        cout << fixed << showpoint << setprecision(2);
        cout << "Pay: " << computePay(hours, rate) << endl;

        return 0;
    }
}

double computePay(double h, double r)
{
    if (h > 40)
    {
        pay = ((h - REG_HRS) * r) * OVERPAY + (REG_HRS * r);
    }
    else
    {
        pay = h * r;
    }

    return pay;
}