#include <iostream>
#include <string>
#include <vector>

using namespace std;

// returns a pointer to a string element
string *ptrToElement(vector<string>* const pVec, int i);

int main() {
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	// displays string object that the returned pointer points to
	cout << "Sending the object pointed to by returned pointer to cout:\n";
	cout << *(ptrToElement(&inventory, 0)) << "\n\n";

	// assigns one pointer to another -- inexpensive assignment
	cout << "Assigning the returned pointer to another pointer.\n";
	string* pStr = ptrToElement(&inventory, 1);
	cout << "Sending the object pointed to by new pointer to cout:\n";
	cout << *pStr << "\n\n";

	// altering the string object through a returned pointer
	cout << "Altering the string object through a returned pointer.\n";
	*pStr = "Healing Potion";
	cout << "Sending the altered object to cout:\n";
	cout << inventory[1] << endl;

	return 0;
}

string* ptrToElement(vector<string>* const pVec, int i) {
	// returns address of the string in position i of vector that the pVec points to 
	return &((*pVec)[i]);
}

