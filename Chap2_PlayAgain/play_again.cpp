// Play Again
// Demonstrates while loop

#include <iostream>

using namespace std;

int main() {

	char again = 'y';

	while (again == 'y') {
		cout << "\n**\tPlayed an exciting game\t**";
		cout << "\nDo you want to play again?(y/n)";
		cin >> again;
	}

	cout << "\nOkay, bye.";

	return 0;
}