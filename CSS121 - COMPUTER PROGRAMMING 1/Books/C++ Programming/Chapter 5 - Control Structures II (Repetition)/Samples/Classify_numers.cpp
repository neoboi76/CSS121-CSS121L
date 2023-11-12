#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int zeros = 0, odd = 0, even = 0, num, rem = 0;

    cout << "Enter twenty integers: " << endl;

    for (int i = 1; i <= 20; i++)
    {
        cout << "[" << i << "]: ";
        cin >> num;

        rem = num % 2;

        switch (rem)
        {
        case 0:
            if (num == 0)
            {
                zeros++;
            }
            even++;
            continue;
        case 1:
            odd++;
            continue;
        case -1:
            odd++;
            continue;
        }
    }

    cout << "There are " << even << " evens, which includes "
         << zeros << " zeros. The number of odd numbers is: "
         << odd << endl;

    return 0;
}