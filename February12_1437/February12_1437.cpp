// February12_1437.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


//class Animal
//{
//
//};
//
//class Human : public Animal //: means "inherits from"
//	//"is-a" relationship
//	//A human is a type of Animal 
//{
//
//};
//
//class Dog : public Animal
//{
//
//};

class Vehicle
{
/*private:*/ //implied (implicit) (as opposed to explicit) 
protected: //protected means that CHILDREN of this class have access, but "others" do not

	//Linux: user, group, others

	double mass = 0.0; //by default = 0.0
	std::string name = ""; //by default = ""
	int topSpeed = 0; //by default = 0

public: 
	Vehicle() = default; 
	void setTopSpeed(int someNewSpeed)
	{
		topSpeed = someNewSpeed;
	}

	void printVehicleDeets()
	{
		std::cout << mass << "kilograms \n"; 
		std::cout << name << "\n";
		std::cout << topSpeed << " miles per hour\n";
	}

	
};

class Boat : public Vehicle
{
	std::string propulsionType; //typical examples include: sails or engines or OARS (humans)

};

class Airplane : public Vehicle
{
	//double mass; //Don't -> mass is already defined in the `Vehicle` class
	int wingspan; //ex: Cessna 150 has wingspan of ...33 ft


public: 
	Airplane() = default; 
	Airplane(const std::string& userSpecifiedName, double mass, int topSpeed, int wingspan)
	{
		Vehicle::mass = mass; 
		name = userSpecifiedName;
		Vehicle::topSpeed = topSpeed; 
		//Airplane::topSpeed = topSpeed; 
		Airplane::wingspan = wingspan;
	}
	void printVehicleDeets()
	{
		Vehicle::printVehicleDeets(); 
		//let's also print the wingspan (because that is an important attribute of planes) 
		std::cout << wingspan << " feet \n";
	}
};

//{
//	adsfasfd
//}
#pragma region SongStuff
class Song
{
	int tempo; //in beats per minute
	std::string name; 
	std::string artistName; 
};

class RockSong : public Song
{
	//what attribute(s) does a "rock" song have that not all songs have? 
};

class ClassicalSong : public Song
{
	//similar question for "classical"
};
#pragma endregion


void demoCreatingVehicleObject()
{
	//First, a generic Vehicle object: 

	Vehicle someVehicle;  //this will call the DEFAULT constuctor (no params)
	//someVehicle.topSpeed = 123; 
	someVehicle.setTopSpeed(123);

	someVehicle.printVehicleDeets();

}

int main()
{
	//Let's make objects of the three classes above (not talking about songs for now)
	//demoCreatingVehicleObject(); 

	Airplane myGrandpasAirplane{ "Cessna 150", 2000.05, 90, 35 };

	myGrandpasAirplane.printVehicleDeets(); 


	
}

