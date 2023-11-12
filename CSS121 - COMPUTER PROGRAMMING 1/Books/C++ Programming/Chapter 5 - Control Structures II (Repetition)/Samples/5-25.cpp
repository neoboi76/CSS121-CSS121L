#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int SENTINEL = -999;

int main()
{
    int sum, id, num;
    string name;
    char ch;
    ifstream infile;
    infile.open("Exp_5_25.txt");

    infile >> id;
    while (infile)
    {
        infile.get(ch);
        getline(infile, name);
        sum = 0;
        infile >> num;

        while (num != SENTINEL)
        {
            sum += num;
            infile >> num;
        }

        cout << "Name: " << name
             << ", Votes: " << sum
             << endl;

        infile >> id;
    }

    infile.close();

    return 0;
}