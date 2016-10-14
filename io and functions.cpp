#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int LoadClasses(string classes[100])
{
	ifstream input;
	input.open("classes.txt");
	int classCounter = 0;
	string buffer;

	while (getline(input, buffer))
	{
		classes[classCounter] = buffer;
		classCounter++;
	}

	input.close();

	return classCounter;
}

void SaveClasses(string classes[100], int classCount)
{
	ofstream outfile;
	outfile.open("classes.txt");

	for (int i = 0; i <= classCount; i++)
	{
		outfile << classes[i] << endl;
	}

}


int main()
{
		string classes[100];
		int classCount = LoadClasses(classes);

		for (int i = 0; i < classCount; i++)
		{
			cout << i << ". " << classes[i] << endl;
		}

		cout << "Edit which class? ";
		int edit;
		cin >> edit;

		cout << "New class name? ";
		cin >> classes[edit];

		SaveClasses(classes, classCount);

		return 0;
	
}
