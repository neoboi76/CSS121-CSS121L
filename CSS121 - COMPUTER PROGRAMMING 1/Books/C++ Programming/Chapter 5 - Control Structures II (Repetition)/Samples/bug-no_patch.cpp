#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int sum = 0, num;
    char ch;

    ifstream infile("bugs.txt");

    for (int i = 1; i <= 3; i++)
    {
        sum = 0;

        for (int j = 1; j <= 4; j++)
        {
            infile >> num;
            cout << num << " ";
            sum += num;
        }

        cout << "Sum = " << sum << endl;
    }

    infile.close();

    return 0;
}