/* Problem #9
Pepperoni++ Pizza House charges 10% service charge and 5% sales tax on the gross bill of the customer. Create a flowchart and a pseudocode that would input the gross bill of the customer and the amount given by the customer to the waiter. It must output the customer’s total bill and change (if there’s any).
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Write C++ code here
    double totalBill, change, gbill, amountGiven;
    
    const double scharge = 0.10;
    const double stax = 0.05;
    
    cout << "Enter gross bill: Php ";
    cin >> gbill;
    
    totalBill = gbill + (gbill * scharge) + (gbill * stax);
    
    cout << "Total bill: Php " << totalBill << endl;
    
    cout << "Enter amount: Php ";
    cin >> amountGiven;
    
    change = amountGiven - totalBill;
    
    cout << fixed << setprecision(2);
    
    cout << "Change: Php " << change << endl;

    return 0;
}
