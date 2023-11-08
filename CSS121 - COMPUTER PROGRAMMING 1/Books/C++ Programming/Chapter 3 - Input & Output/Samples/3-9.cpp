// Input failure and the clear function
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
 
  cin.clear();

  cin.ignore(200, '\n');

  cout << "\nLine 14: Enter name, age, weight, "
      << "and height: ";
  cin >> name >> age >> weight >> height;
  cout << endl;

  cout << "Line 17: Name: " << name << endl;
  cout << "Line 18: Age: " << age << endl;
  cout << "Line 19: Weight: " << weight << endl;
  cout << "Line 20: Height: " << height << endl; 
 
  return 0; 
}