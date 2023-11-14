#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str);

int main()
{
    string inp;

    cout << "Enter a string: ";
    cin >> inp;

    if (isPalindrome(inp) == true)
    {
        cout << inp << " is a Palindrome" << endl;
    }
    else
    {
        cout << inp << " is not a Palindrome" << endl;
    }

    return 0;
}

/////////////////

bool isPalindrome(string str)
{
    int length = str.length();

    for (int i = 0; i <= length; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            return false;
        }
    }

    return true;
}