/* Problem #5

Ten young men agreed to purchase a gift worth Php 10,000.00 for their idol: LA Lopez.  In addition, they agreed to continue with their plan even if at least one of them drop out.  Create a flowchart a pseudocode that would input the number of men who dropped out (assume 0 to 9 only) and output how much more will each have to contribute toward the purchase of the gift.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int droppedOut;
    
    const int men = 10;
    const double giftWorth = 1000.00;
    
    cout << "Enter number of men dropped out (0-9 only): ";
    cin >> droppedOut;
    
    double addCon = (giftWorth * droppedOut) / (men - droppedOut);
    
    cout << fixed << setprecision(2);
    cout << "Additional contribution of each member is : Php " << addCon << endl;

    return 0;
}
