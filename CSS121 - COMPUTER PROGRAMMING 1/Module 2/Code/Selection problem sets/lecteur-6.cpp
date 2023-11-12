#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{
    double sal, bonus;
    
    char gen;
    
    const double fb1 = 0.75;
    const double fb2 = 0.5;
    const double mb1 = 0.45;
    const double mb2 = 0.35;
    
    cout << "Gender: ";
    cin >> gen; 
    
    gen = toupper(gen);
    
    cout << "Salary: Php ";
    cin >> sal;
    
    cout << fixed << setprecision(2);
    
    if (gen == 'F') {
        if (sal <= 15000) {
            bonus = 15000 * fb2;
        }
        else {
            bonus = sal * fb1;
        }
        
        cout << "you are FEMALE" << endl;
        cout << "Your salary is: Php " << sal << endl;
        cout << "Your bonus is: Php " << bonus << endl;
    }
    
    else if (gen == 'M') {
        if (sal <= 20000) {
            bonus = sal * mb2;
        }
        else {
            bonus = sal * mb1;
        }
        
        cout << "you are MALE" << endl;
        cout << "Your salary is: Php " << sal << endl;
        cout << "Your bonus is: Php " << bonus << endl;
    }
    
    return 0;
}
