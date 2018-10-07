// Inventory Referencer
// Demostrates returning a reference

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// returns reference to a string
string& reftoElement(vector<string>& inventory, int i);

int main() {

	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	// displays string that the returned reference refers to
	cout << "Sending the returned reference to cout:\n";
	cout << reftoElement(inventory, 0) << "\n\n";

	// assigns one reference to another -- inexpensive assignment
	cout << "Sending the returned reference to cout:\n";
	string& rStr = reftoElement(inventory, 1);
	cout << "Sending the new referenct to Cout:\n";
	cout << rStr << "\n\n";

	// copies a string object -- expensive assignment
	cout << "Assigning the returned reference to a string objet.\n";
	string str = reftoElement(inventory, 2);
	cout << "Sending the new string object to cout:\n";
	cout << str << "\n\n";

	// altering the string object through a returned reference
	cout << "Altering an object through a returned reference.\n";
	rStr = "Healing Potion";
	cout << "Sending the alterec object to cout:\n";
	cout << inventory[1] << endl;

 	return 0;

}

// returns a reference to a string
string& reftoElement(vector<string>& vec, int i) {
	return vec[i];
}