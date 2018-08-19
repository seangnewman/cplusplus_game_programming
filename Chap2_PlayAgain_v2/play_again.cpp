// Play Again 2.0
// Demonstrates 2.0

#include <iostream>

using namespace std;

int main() {

	char again;

	do {
		cout << "\n**\tPlayed an exciting game\t**";
		cout << "\nDo you want to play again? (y/n):";
		cin >> again;

	} while (again == 'y');

	cout << "Okay, bye!";

	return 0;
}