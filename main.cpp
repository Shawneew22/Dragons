#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool done = false;
	const int foodConsumed_PerPersonPerDay = 2;
	const int oxygenCreated_perDay = 5;
	const int wasteCreated_PerPersonPerDay = 3;
	const int oxygenUsed_PerPersonPerDay = 2;
	int foodGrown_PerDay;
	int cleanup_PerPersonPerDay;
	int foodCount;
	int wasteCount;
	int oxygenCount;
	int peopleCount;
	int missionLength;
	string teamName;
	int choice = 0;

	cout << "Mars Colony Main Menu" << endl;
	cout << endl << "1.  Set Mission Parameters" << endl;
	cout << "2.  Run Simulation" << endl;
	cout << "3.  Quit" << endl;
	cout << "Choice >>";
	cin >> choice;

	if (choice == 3)
	{
		done = true;
	}

	else if (choice == 1)
	{
		cout << "Mission parameters selected" << endl;
	}
	else if (choice == 2)
	
	{
		cout << "Running" << endl;
	}


	else
	{
		cout << "Invalid choice" << endl;
	}



	return 0;
}