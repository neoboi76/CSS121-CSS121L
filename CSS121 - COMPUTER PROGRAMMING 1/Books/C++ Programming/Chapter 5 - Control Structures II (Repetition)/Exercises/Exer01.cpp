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
    // Finds absolute value in case of negative numbers
    temp = abs(num);

    // Initial counter as exponent
    i = -1;

    // Increments and produces the exponent
    while (temp != 0)
    {
        i++;
        temp /= 10;
    }

    // Re-initializes temp
    temp = abs(num);
    // Gets the value of div used to
    // extract the first digit
    div = pow(10, i);

    cout << "Digits are: ";

    while (temp != 0)
    {
        // Extracts the first digit
        digit = temp / div;
        // Removes the First digit
        temp %= div;
        // Adds digit in sum
        sum += digit;
        // Truncates last digit in div
        div /= 10;
        // Displays digit
        cout << digit << " ";
    }

    cout << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}