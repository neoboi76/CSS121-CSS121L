#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream infile;
  infile.open("inputdat.dat"); // open inputdat.dat

  if (!infile)
  {
    cout << "Cannot open the input file. "
         << "The program terminates." << endl;
    return 1;
  }

  return 0;
}