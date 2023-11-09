// Program: Effect of break statements in a switch structure

#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter an integer between 0 and 7: ";
    cin >> num;
    cout << endl;

    cout << "The number you entered is " << num
         << endl;

    switch (num)
    {
    case 0:
    case 1:
        cout << "Learning to use ";
    case 2:
        cout << "C++'s ";
    case 3:
        cout << "switch structure." << endl;
        break;
    case 4:
        break;
    case 5:
        cout << "This program shows the effect ";
    case 6:
    case 7:
        cout << "of the break statement." << endl;
        break;
    default:
        cout << "The number is out of range." << endl;
    }
    cout << "Out of the switch structure." << endl;

    return 0;
}