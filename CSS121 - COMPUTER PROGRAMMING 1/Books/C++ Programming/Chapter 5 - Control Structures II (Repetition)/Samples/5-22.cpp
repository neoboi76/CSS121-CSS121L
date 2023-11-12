#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int row, col, size;

    cout << right;
    cout << "Multplication Table\n"
         << endl;

    cout << "Enter size of multiplication table: ";
    cin >> size;
    cout << endl;
    system("clear");

    cout << "\n\tA " << size << " x " << size << " Multiplication table\n"
         << endl;

    for (row = 1; row <= size; row++)
    {
        for (col = 1; col <= size; col++)
        {
            cout << setw(5) << row * col;
        }
        cout << endl;
    }

    return 0;
}