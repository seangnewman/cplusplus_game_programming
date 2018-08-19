// Score Rater 3.0
// Demonstrates if else - if else suite

#include <iostream>

using namespace std;

int main() {

	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (score >= 1000) {
		cout << "You scored 1000 or more.  Impressive!\n";
	}else if(score >= 5000) {
		cout << "You scored 500 or more.  Nice.\n";
	}else if( score >= 250) {
		cout << "You scored 250 or more.  Descent.\n";
	}
	else {
		cout << "You scored less than 250.  You have nothing to brag about.\n";
	}

	return 0;
}