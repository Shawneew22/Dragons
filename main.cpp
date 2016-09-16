#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool done = false;
	const int foodConsumed_PerPersonPerDay = 2;
	const int oxygenCreated_PerDay = 5;
	const int wasteCreated_PerPersonPerDay = 3;
	const int oxygenUsed_PerPersonPerDay = 2;
	int foodGrown_PerDay;
	int cleanup_PerPersonPerDay;
	int foodCount;
	int wasteCount = 0;
	int oxygenCount = 100;
	int peopleCount;
	int missionLength;
	string teamName;
	int choice = 0;
	

	cout << "Mars Colony Main Menu" << endl;
	cout << endl << "1. Set Mission Parameters" << endl;
	cout << "2. Run Simulation" << endl;
	cout << "3. Quit" << endl;
	cout << "Choice >> ";
	cin >> choice;

	if (choice == 3)
	{
		done = true;
	}

	else if (choice == 1)
	{
		cout << "A. Food grown - per day.............. ";
		cin >> foodGrown_PerDay;
		cout << "B. Cleanup - per person - per day.... ";
		cin >> cleanup_PerPersonPerDay;
		cout << "C. Starting units of food............ ";
		cin >> foodCount;
		cout << "D. Mission length in days............ ";
		cin >> missionLength;
		cout << "E. People on mission................. ";
		cin >> peopleCount;
		cout << "F. Team name......................... ";
		cin >> teamName;

		/* Test code 
		cout << "foodGrown_PerDay: " << foodGrown_PerDay << endl;
		cout << "cleanup_PerPersonPerDay: " << cleanup_PerPersonPerDay << endl;
		cout << "foodCount: " << foodCount << endl;
		cout << "missionLength: " << missionLength << endl;
		cout << "peopleCount: " << peopleCount << endl;
		cout << "teamName: " << teamName << endl; */

	}
	else if (choice == 2)

	{
		int day = 1;
		bool missionSuccess = true;
		cout << "Running simulation" << endl;
		
		while (day <= missionLength)

		{
			cout << "Day " << day << "of " << missionLength << ": " << endl;
			cout << foodGrown_PerDay << "units of food grown " << endl;
			cout << foodConsumed_PerPersonPerDay << " units of food consumed " << endl << endl;
			cout << wasteCreated_PerPersonPerDay << "units of waste created " << endl;
			cout << cleanup_PerPersonPerDay << "units of waste cleaned up " << endl << endl;
			cout << oxygenCreated_PerDay << "units of oxygen produced " << endl;
			cout << oxygenUsed_PerPersonPerDay << "units of oxygen used " << endl << endl;
			foodCount += foodGrown_PerDay - (foodConsumed_PerPersonPerDay * peopleCount);
			if (foodCount < 0)
			{
				missionSuccess = false;
				cout << "Mission failure" << endl;
				break;
			}
			wasteCount += (wasteCreated_PerPersonPerDay * peopleCount) - (cleanup_PerPersonPerDay * peopleCount);
			if (wasteCount > 20)
			{
				missionSuccess = false;
				cout << "Mission failure" << endl;
				break;
			}

			oxygenCount += oxygenCreated_PerDay - (oxygenUsed_PerPersonPerDay * peopleCount);

			if (oxygenCount < 0 )
			{
				missionSuccess = false;
				cout << "Mission failure" << endl;
				break;
			}

			cout << "Status: " << foodCount << " food, " << wasteCount << " waste, " << oxygenCount << " oxygen. " ;
			day++;
 		}
		if (missionSuccess)

		{
			cout << "Mission Success!" << endl;
		}
	}


	else
	{
		cout << "Invalid choice" << endl;
	}



	return 0;
}