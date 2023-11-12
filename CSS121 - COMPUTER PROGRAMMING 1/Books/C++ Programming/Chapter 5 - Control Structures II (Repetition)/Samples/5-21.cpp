#include <iostream>

using namespace std;

const int SIZE = 5;

int main()
{
    int row, col;

    for (row = 1; row <= SIZE; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}