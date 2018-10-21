#include <iostream>
#include <string>

using namespace std;

int main() {

	int* pAPointer;									// declares a pointer
	int* pScore = 0;								// declare and initialize pointer

	int score = 1000;
	pScore = &score;

	cout << "Assigning &score to pScore\n";
	cout << "&score is: " << &score << "\n";		// address of scoe variable
	cout << "pScore is: " << pScore << "\n";		// address stored in pointer
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";	// value pointed to by pointer

	cout << "Adding 500 to score\n";
	score += 500;
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";

	cout << "Adding 500 to score\n";
	score += 500;
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";

	cout << "Assigning &newScore to pScore\n";
	int newScore = 5000;
	pScore = &newScore;
	cout << "&newScore is: " << &newScore << "\n";
	cout << "pScore is: " << pScore << "\n";		// address stored in pointer
	cout << "newScore is: " << newScore << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";

	cout << "Assigning &str to pStr\n";
	string str = "score";
	string* pStr = &str;							// pointer to string object
	cout << "str is: " << str << "\n";
	cout << "*pStr is: " << *pStr << "\n";
	cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
	cout << "pStr->size() is: " << pStr->size() << "\n";

	return 0;
}