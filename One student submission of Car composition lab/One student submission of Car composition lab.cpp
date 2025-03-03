// One student submission of Car composition lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Car.h"

int main()
{
	Car someCarOnGoogle(5.0, "225/65R17");

	std::cout << "The car tire size is: " << someCarOnGoogle.getTireSize() << "\n";
	std::cout << "The car ENGINE size is: " << someCarOnGoogle.getEngineVolume() << "\n";

	someCarOnGoogle.beginDrive(); 


}
