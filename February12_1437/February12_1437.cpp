// February12_1437.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicle.h"


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

/*A little demo of function overloading ....*/
int addInputs(int a, int b)
{
	return a + b; 
}

int addInputs(int a, int b, int c)
{
	return a + b + c; 
}

void addInputs(int a, int b, int c, int d)
{
	std::cout << a + b + c + d << "\n";
}


int main()
{
	//addInputs() //this was a little demo/reminder of what "overloading" means
	// 
	//Let's make objects of the three classes above (not talking about songs for now)
	//demoCreatingVehicleObject(); 

	Airplane myGrandpasAirplane{ "Cessna 150", 2000.05, 90, 35 };

	myGrandpasAirplane.printVehicleDeets(); 
	
	std::cout.operator<<(3.14) << "\n"; //this is a lil sneak peak at "operator overloading" 

	Vehicle me; 
	me.setTopSpeed(7);  //friend // 7 mph 

	//myGrandpasAirplane.vehicleCount; 
	std::cout << "How many Vehicle objects we have? " << Vehicle::vehicleCount << "\n";


	//how to print \ in the terminal		
	
	

}

