#include <iostream>
#include <fstream>

const int SENTINEL = -999;

using namespace std;

int main()
{
    int sum = 0, num = 0, line = 0;
    ifstream infile("Exp_5_23.txt");
    infile >> num;

    while (infile)
    {

        while (num != SENTINEL)
        {
            sum += num;
            infile >> num;
        }

        cout << "Line " << line + 1
             << " : Sum = " << sum << endl;
        line++;
        infile >> num;
    }

    infile.close();

    return 0;
}