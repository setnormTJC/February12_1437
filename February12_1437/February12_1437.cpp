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
	double mass;
	std::string name; 
	int topSpeed; 
};

class Boat : public Vehicle
{
	std::string propulsionType; //typical examples include: sails or engines or OARS (humans)

};

class Airplane : public Vehicle
{
	//double mass; //Don't -> mass is already defined in the `Vehicle` class
};

int main()
{
	
}

