#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int num, div2, div3, divBoth, divNeither;
	char choice;
	const int size = 10;
	
	cout << "Input ten numbers: " << endl;
	
	do {
		
		div2 = 0;
		div3 = 0;
		divBoth = 0; 
		divNeither = 0;
		
		
		for (int i = 1; i <= size; i++) {
			
			cout << '[' << i << ']' << " ";
			cin >> num;
			num = toupper(num);
			
			if (num % 2 == 0 && num % 3 == 0) {
				divBoth++;
			}
			
			else if (num % 3 == 0) {
				div3++;
			}
			
			else if (num % 2 == 0) {
				div2++;
			}
			
			else {
				divNeither++;
			}
		}
		
		cout << "Divisible by both 2 & 3: " << divBoth << endl;
		cout << "Divisible by 3: " << div2 << endl;
		cout << "Divisible by 2: " << div3 << endl;
		cout << "Divisible by neither 2 or 3: " << divNeither << endl;
		
		do {
			cout << "Do you want to repeat the process? [y/n]: ";
			cin >> choice;
			choice = toupper(choice);
		} while (choice != 'Y' && choice != 'N');
	} while (choice == 'Y');
	
	return 0;
}
