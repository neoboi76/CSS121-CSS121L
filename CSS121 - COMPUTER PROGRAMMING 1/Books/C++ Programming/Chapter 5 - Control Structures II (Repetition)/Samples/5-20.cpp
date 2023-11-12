#include <iostream>

using namespace std;

int main()
{
    int num, rem, temp, sum;

    cout << "Enter a positive integer: ";
    cin >> num;
    cout << endl;

    temp = num;

    sum = 0;

    do
    {
        rem = num % 10;
        num /= 10;
        sum += rem;

    } while (num != 0);

    cout << "The sum of the digits = " << sum << endl;

    if (sum % 3 == 0)
    {
        cout << temp << " is divisible by 3" << endl;
    }
    else
    {
        cout << temp << " is not divisible by 3" << endl;
    }

    if (sum % 9 == 0)
    {
        cout << temp << " is divisible by 9" << endl;
    }
    else
    {
        cout << temp << " is not divisible by 9" << endl;
    }

    return 0;
}