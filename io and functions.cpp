#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void ReadFile(string filename)
{
	ifstream input;
	input.open(filename);

	string lineOfText;

	while (getline(input, lineOfText))
	{
		cout << lineOfText << endl;
	}
	input.close();

}



int main()
{
	ReadFile("fable.txt");
	

	return 0;
}
