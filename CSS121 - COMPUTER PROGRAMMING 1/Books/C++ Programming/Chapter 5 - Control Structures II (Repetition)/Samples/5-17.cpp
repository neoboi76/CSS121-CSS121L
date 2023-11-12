#include <iostream>

using namespace std;

int main()
{
    int sum = 0, n;

    cout << "Enter the number of positive integers to be added: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "The sum of the first " << n << " positive integers is: " << sum << endl;

    return 0;
}