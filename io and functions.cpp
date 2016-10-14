#include <iostream>
#include <string>
#include <fstream>
using namespace std;


#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void Searchfile(string filename, string searchFor)
{
	ifstream input;
	int lineCount = 0;
	input.open(filename);

	string lineOfText;

	while (getline(input, lineOfText))
	{
		if (lineOfText.find(searchFor) != string::npos)
		{
			cout << "Found at line: " << lineCount << ": " << lineOfText << endl << endl;
		}

		
			
		lineCount++;
		
	}
	input.close();

}



int main()
{
	

	cout << "What do you want to search for? ";
	string searchFor;
	cin >> searchFor;

	Searchfile("fable.txt", searchFor);

	return 0;
}
