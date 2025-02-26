#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

struct titanicData
{
	int passengerID;
	bool survived;
	int passengerClass;
	string lastName;
	char sex;
	int age;
	double fareCost;
};

void printTitanicRecord(vector<titanicData> record)
{
	titanicData currentPassenger;

	cout << "ID       Survived       Class       Last Name       Sex       Age       Fare Cost\n"
		<< "==================================================================================\n\n";

	for (auto& currentPassenger : record)
	{
		cout << fixed << left << setw(8);

		cout << currentPassenger.passengerID << " " << setw(14) << (currentPassenger.survived ? "Yes" : "No") << " "
			<< setw(11) << currentPassenger.passengerClass << " " << setw(15) << currentPassenger.lastName << " " << setw(9) << currentPassenger.sex << " "
			<< setw(9) << currentPassenger.age << " $" << setprecision(2) << currentPassenger.fareCost << "\n\n";

	}

}

double calcAverageFare(vector<titanicData> record)
{
	double currentFare;
	double totalFare = 0;

	for (auto& currentFare : record)
	{

		totalFare += currentFare.fareCost;
	}

	return (totalFare / record.size());
}

int calcNumberOfSurvivors(vector<titanicData> record)
{
	bool currentPassenger;
	int totalSurvivors = 0;

	for (auto& currentPassenger : record)
	{
		if (currentPassenger.survived)
			totalSurvivors++;
	}


	return totalSurvivors;
}

titanicData findOldestPassenger(vector<titanicData> record)
{
	titanicData oldestPassenger;
	int currentPassenger;

	oldestPassenger.age = 0;

	for (auto& currentPassenger : record)
	{
		if (currentPassenger.age > oldestPassenger.age)
		{
			oldestPassenger = currentPassenger;
		}


	}

	return oldestPassenger;
}

vector<titanicData> findYoungestPassengers(vector<titanicData> record)
{
	vector<titanicData> listOfYoungestPassengers; //changed to an array
	int currentPassenger;

	//listOfYoungestPassengers.age = 100;
	int youngestAge = 100; //so far ... 

	for (auto& currentPassenger : record)
	{
		if (currentPassenger.age <= youngestAge)  
		{
			youngestAge = currentPassenger.age;
		}
	}

	//second loop to add people with the youngest age to the list: 
	for (auto& currentPassenger : record)
	{
		if (currentPassenger.age == youngestAge)
		{
			listOfYoungestPassengers.push_back(currentPassenger);
		}
	}

	return listOfYoungestPassengers;
}

int main()
{

	ifstream fin{ "C:/Users/Work/Downloads/titanic.txt" };
	titanicData currentPassenger;

	vector<titanicData> titanicRecord;

	if (!fin.is_open())
	{
		cout << "File could not be opened";
		return 404;
	}

	while (!fin.eof())
	{
		fin >> currentPassenger.passengerID >> currentPassenger.survived >> currentPassenger.passengerClass
			>> currentPassenger.lastName >> currentPassenger.sex >> currentPassenger.age >> currentPassenger.fareCost;


		titanicRecord.push_back(currentPassenger);
	}

	printTitanicRecord(titanicRecord);
	cout << "\n";

	titanicData oldestPassenger = findOldestPassenger(titanicRecord);
	vector<titanicData> listOfYoungestPassengers = findYoungestPassengers(titanicRecord);

	cout << "Average Fare Cost: " << calcAverageFare(titanicRecord) << "\n\n";

	cout << "Total Number of Survivors: " << calcNumberOfSurvivors(titanicRecord) << "\n\n";

	cout << "The Oldest Passenger:  Last Name: " << oldestPassenger.lastName << "  Age: " << oldestPassenger.age << "\n\n";

	for (int i = 0; i < listOfYoungestPassengers.size(); ++i)
	{
		if (i == 0)
		{
			cout << "The Youngest Passenger(s):  Last Name: "
				<< listOfYoungestPassengers[i].lastName << "  Age: " << listOfYoungestPassengers[i].age << "\n\n";
		}

		else
		{
			cout << "ANOTHER youngest passenger (with same age as above): "
				<< listOfYoungestPassengers[i].lastName << "\n";
		}
	}

	fin.close();

	return 0;

}

