#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int j = 9, i;

    for (i = 0; i < 10; i++)
    {
        j--;
    }
    j += i;

    cout << j << endl;

    return 0;
}