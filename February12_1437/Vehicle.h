#pragma once

#include<iostream>
#include<string> 

class Vehicle
{
	/*private:*/ //implied (implicit) (as opposed to explicit) 
protected: //protected means that CHILDREN of this class have access, but "others" do not
	//private: 
		//Linux: user, group, others

	double mass = 0.0; //by default = 0.0
	std::string name = ""; //by default = ""
	int topSpeed = 0; //by default = 0


public:
	Vehicle();
	void setTopSpeed(int someNewSpeed); //this is a function declaration now

	void printVehicleDeets() const;


	static int vehicleCount;
};

class Boat : public Vehicle
{
	std::string propulsionType; //typical examples include: sails or engines or OARS (humans)

	//functions will be added later (if we're interested)
};

class Airplane : public Vehicle
{
	//double mass; //Don't -> mass is already defined in the `Vehicle` class
	int wingspan; //ex: Cessna 150 has wingspan of ...33 ft


public:
	Airplane() = default;
	Airplane(const std::string& userSpecifiedName, double mass, int topSpeed, int wingspan);

	//add a constructor overload that calls a parameterized `Vehicle` constructor: 

	/*This function OVERRIDES its parent's `printVehicleDeets` function*/
	void printVehicleDeets() const; 
};