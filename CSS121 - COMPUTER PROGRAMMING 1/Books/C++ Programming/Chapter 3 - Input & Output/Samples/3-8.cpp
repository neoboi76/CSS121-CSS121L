// Input Failure program
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  int age = 0;
  int weight = 0;
  double height = 0.0;

  cout << "Line 5: Enter name, age, weight, and "
       << "height: ";
  cin >> name >> age >> weight >> height;
  cout << endl;

  cout << "Line 8: Name: " << name << endl;
  cout << "Line 9: Age: " << age << endl;
  cout << "Line 10: Weight: " << weight << endl;
  cout << "Line 11: Height: " << height << endl;

  return 0;
}