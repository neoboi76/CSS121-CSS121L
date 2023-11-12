/*Write a program that prompts the user to input an integer and then outputs
both the individual digits of the number and the sum of the digits. For
example, it should output the individual digits of 3456 as 3 4 5 6, output
the individual digits of 8030 as 8 0 3 0, output the individual digits of
2345526 as 2 3 4 5 5 2 6, output the individual digits of 4000 as 4 0 0 0,
and output the individual digits of -2345 as 2 3 4 5.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, digit, div, temp, sum = 0, i;

    cout << "Enter an integer: ";
    cin >> num;
    temp = abs(num);

    i = -1;

    while (temp != 0)
    {
        i++;
        temp /= 10;
    }

    temp = abs(num);
    div = pow(10, i);

    cout << "Digits are: ";

    while (temp != 0)
    {
        digit = temp / div;
        temp %= div;
        sum += digit;
        div /= 10;
        cout << digit << " ";
    }

    cout << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}