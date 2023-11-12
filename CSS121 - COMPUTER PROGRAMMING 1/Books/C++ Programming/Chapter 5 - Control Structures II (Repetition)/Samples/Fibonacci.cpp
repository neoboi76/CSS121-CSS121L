#include <iostream>

using namespace std;

int main()
{
    int x, y, nth, out;

    cout << "Enter the first two Fibonacci Numbers: " << endl;
    cout << "[1]: ";
    cin >> x;
    cout << "[2]: ";
    cin >> y;

    cout << "Enter the position of the desired Fibonacci Number: ";
    cin >> nth;

    for (int i = 3; i <= nth; i++)
    {
        out = x + y;
        x = y;
        y = out;
    }

    cout << "The Fibonacci Number at position " << nth << " is " << out;

    return 0;
}