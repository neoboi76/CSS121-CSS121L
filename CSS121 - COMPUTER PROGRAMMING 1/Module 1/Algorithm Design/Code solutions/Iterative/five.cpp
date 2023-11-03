/* Problem #5
Create a flowchart and pseudocode that will input 6 scores for quizzes (0 - 100). 
Eliminate the lowest quiz and compute and output the average of the five remaining
quizzes.
*/

#include <iostream>
#include <iomanip>

using namespace std;


int main() {
	double num;
	double quizSum = 0;
	int ctr = 1;
	
	cout << "Input six scores: " << endl;
	
	cin >> num;
	
	while (num <= 0 || num > 100) {
		cout << "Invalid input! Try again." << endl;
		cin >> num;
	}
	
	double quizLow = num;
	
	while (ctr <= 5) {
		
		cin >> num;
		
		while (num <= 0 || num > 100) {
			cout << "Invalid input! Try again." << endl;
			cin >> num;
		}
		
		if (num <= quizLow){
			quizSum += quizLow;
			quizLow = num;
		}
		
		else {
			quizSum += num;
		}
		ctr++;
	}
	
	double quizAvg = quizSum / 5.0;
	
	cout << fixed << setprecision(2);
	cout << "Combined quiz score average: " << quizAvg << endl;
	
	return 0;
	
}
