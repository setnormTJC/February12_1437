#include <iostream>
#include <string>
#include <vector>

class Planet {
public:
	std::string name;
	double diameter;

	//Country someCountry; 

	Planet(std::string name, double diameter) {
		this->name = name;
		this->diameter = diameter;
	}

	void print() {
		std::cout << "Planet " << name << " has a diameter of " << diameter << " km." << std::endl;
	}
};

class Earth : public Planet //this is INHERITANCE
{
	std::vector<Country> listOfCountries; //this is COMPOSITION 
};

class Country {
public:
	std::string name;
	double population;

	std::vector<State> statesInCountry;// = { "" }

	Country(std::string name, double population) {
		this->name = name;
		this->population = population;
	}
	void print() {
		std::cout << "Country " << name << " has a population of " << population << " people." << std::endl;
	}
};
class State {
public:
	std::string name;
	double population;

	std::vector<City> citiesInTheGivenState; 

	State(std::string name, double population) {
		this->name = name;
		this->population = population;
	}
	void print() {
		std::cout << "State " << name << " has a population of " << population << " people." << std::endl;
	}
};
class City {
public:
	std::string name;
	double population;

	City(std::string name, double population) {
		this->name = name;
		this->population = population;
	}
	void print() {
		std::cout << "City " << name << " has a population of " << population << " people." << std::endl;
	}
};

int main() {

	//Earth earthObject({"Texas, "Florida""}, etc.)
	// 
	
	//Planet earth("Earth", 12742);
	//earth.print();

	//Country usa("USA", 32820);
	//usa.print();

	//State texas("Texas", 289958);
	//texas.print();

	//City dallas("Dallas", 13410);
	//dallas.print();
	return 0;
}
