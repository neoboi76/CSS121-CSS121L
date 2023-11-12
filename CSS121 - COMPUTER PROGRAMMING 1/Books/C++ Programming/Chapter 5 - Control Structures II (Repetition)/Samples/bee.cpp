#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream input("beem.txt");
    string word;
    int beeCounter = 0;

    while (input)
    {

        input >> word;

        if (word == "bees" || word == "Bees")
        {
            beeCounter++;
        }
    }

    cout << "The number of 'bee' is: " << beeCounter << endl;

    input.close();

    return 0;
}