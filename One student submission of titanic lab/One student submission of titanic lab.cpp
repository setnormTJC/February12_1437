#include <iostream>
#include <iomanip>
#include <fstream>

using std::cout;
using std::ifstream;
using std::string;
using std::setw;

struct TitanicRecord
{
	int PID;
	bool survived;
	int passClass;
	string lastName;
	char sex;
	int age;
	double fareCost;
};

void printRecord(TitanicRecord records[50]);

double calcAverageFare(TitanicRecord records[50]);

int calcSurvivors(TitanicRecord records[50]);

double over50SurvivalProb(TitanicRecord records[50]);

int main()
{
	ifstream fin{ "C:/Users/Work/Downloads/titanic.txt" };

	if (!fin.is_open())
	{
		std::cout << "The file was not found\n";
		return -1; //"early return" 
	}

	TitanicRecord records[50]; //make an array - like: 
	//int nums[5] = {1, 2, 3, 4, 5}

	int i = 0;

	while (!fin.eof())
	{
		fin >> records[i].PID //hit a space in the file
			>> records[i].survived //hit another space in the file
			>> records[i].passClass //etc.
			>> records[i].lastName
			>> records[i].sex
			>> records[i].age
			>> records[i].fareCost;

		i++;
	}

	printRecord(records);

	cout << "\n\n" << "Average fare cost: $" << calcAverageFare(records);

	cout << "\n\n" << "Number out of 50 who survived: " << calcSurvivors(records);

	cout << "\n\n" << "Probability of a passenger surviving if they paid greater than $50: " << over50SurvivalProb(records) * 100 << "%" << "\n";

	return 0;
}


void printRecord(TitanicRecord records[50])
{
	cout << "PID   Survived?   Class   Last Name       Sex   Age   Fare Cost\n";
	cout << "---------------------------------------------------------------\n";

	for (int i = 0; i < 50; i++)
	{
		cout << std::left << setw(6) << records[i].PID
			<< setw(12) << (records[i].survived ? "True" : "False")
			<< setw(8) << records[i].passClass
			<< setw(16) << records[i].lastName
			<< setw(6) << records[i].sex
			<< setw(6) << records[i].age
			<< std::fixed << std::setprecision(2) << records[i].fareCost << "\n";
	}
}

double calcAverageFare(TitanicRecord records[50])
{
	double total = 0;

	for (int i = 0; i < 50; i++)
	{
		total += records[i].fareCost;
	}

	return total / 50;
}

int calcSurvivors(TitanicRecord records[50])
{
	int numSurvivors = 0;

	for (int i = 0; i < 50; i++)
	{
		numSurvivors += records[i].survived;
	}

	return numSurvivors;
}

double over50SurvivalProb(TitanicRecord records[50])
{
	double numOver50 = 0;
	double survivors = 0;

	for (int i = 0; i < 50; i++)
	{
		if (records[i].fareCost > 50)
		{
			numOver50++;
			survivors += records[i].survived;
		}
	}

	return survivors / numOver50;
}