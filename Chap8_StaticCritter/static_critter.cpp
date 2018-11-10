// Static Critter
// Demonstrates static member variables and functions

#include <iostream>

using namespace std;

class Critter
{
	public:
		static int s_Total;			//static member variable declaration

		Critter(int hunger = 0);
		static int GetTotal();		// static member function prototype

	private:
		int m_Hunger;
};

int Critter::s_Total = 0;			// static member variable definition

Critter::Critter(int hunger) :
	m_Hunger(hunger)
{
	cout << "A critter has been born!" << endl;
	++s_Total;
}

int Critter::GetTotal() 
{
	return s_Total;
}

int main()
{
	cout << "The total numbers of critters is :";
	cout << Critter::s_Total << "\n\n";

	Critter crit1, crit2, crit3;

	cout << "\nThe total number of critters is :";
	cout << Critter::GetTotal() << "\n";

	return 0;
}