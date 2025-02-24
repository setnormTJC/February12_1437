#include"Vehicle.h"

int Vehicle::vehicleCount = 0; 

Vehicle::Vehicle()
{
	std::cout << "Default constructor of `Vehicle` got called!\n";
	vehicleCount++; 
}

void Vehicle::setTopSpeed(int someNewSpeed)
{
	topSpeed = someNewSpeed;
}

void Vehicle::printVehicleDeets() const 
{
	std::cout << mass << "kilograms \n";
	std::cout << name << "\n";
	std::cout << topSpeed << " miles per hour\n";
}

Airplane::Airplane(const std::string& userSpecifiedName, double mass, int topSpeed, int wingspan)
{
	//vehicleCount++;  //do we need this? 

	Vehicle::mass = mass;
	name = userSpecifiedName;
	Vehicle::topSpeed = topSpeed;
	//Airplane::topSpeed = topSpeed; 
	Airplane::wingspan = wingspan;
}

void Airplane::printVehicleDeets() const
{

	//what does that const do? 

	//wingspan = 123;  //this won't work! Because we used const in the function header (signature)

	Vehicle::printVehicleDeets();
	//let's also print the wingspan (because that is an important attribute of planes) 
	std::cout << wingspan << " feet \n";
}
