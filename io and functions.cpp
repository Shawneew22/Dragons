#include<iostream>
#include<string>
#include<fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LoadNouns(string nouns[100], int & nounCount)
{
	ifstream input;
	input.open("one.txt");
	nounCount = 0;
	string buffer;
	

	while (getline(input, buffer))
	{
		nouns[nounCount] = buffer;
		nounCount++;
	}
	input.close();
}



void LoadAdjectives(string adjectives[100], int & adjectiveCount)
{
	{
		ifstream input;
		input.open("two.txt");
		adjectiveCount = 0;
		string buffer;
	

		while (getline(input, buffer))
		{
			adjectives[adjectiveCount] = buffer;
			adjectiveCount++;
		}
		input.close();
	}
}

string GeneratePoem(string nouns[100], int nounCount, string adjectives[100], int adjectiveCount)
{
	string poem = " ";
	int randomNoun = rand() % nounCount;
	int randomAdj = rand() % adjectiveCount;
	poem += nouns[randomNoun] + " are " + adjectives[randomAdj] + ", \n";
	randomNoun = rand() % nounCount;
	randomAdj = rand() % adjectiveCount;
	poem += nouns[randomNoun] + " are " + adjectives[randomAdj] + ", \n";
	randomNoun = rand() % nounCount;
	randomAdj = rand() % adjectiveCount;
	poem += nouns[randomNoun] + " are " + adjectives[randomAdj] + ", \n";
	poem += "and so are you! ";
	return poem;
}



int main()
{
	srand(time(NULL));
	string nouns[100];
	int nounCount;
	string adjectives[100];
	int adjectiveCount;

	LoadNouns(nouns, nounCount);
	LoadAdjectives(adjectives, adjectiveCount);
	string poem;
	poem = GeneratePoem(nouns, nounCount, adjectives, adjectiveCount);

	cout << "RANDOM POEM: " << endl;
	cout << poem << endl;

	return 0;
}
