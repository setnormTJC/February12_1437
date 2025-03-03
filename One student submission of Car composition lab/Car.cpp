#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(double engineVolume, string tireSize)
	:engineObject(engineVolume), tireObjects{ Tire(tireSize), Tire(tireSize), Tire(tireSize), Tire(tireSize) }
{

}

void Car::beginDrive()
{
	driverDoor.openDoor();
	engineObject.startEngine();
	passengerDoor.windowObject.rollDown();
	tireObjects[3].inflateTire(32);
	engineObject.accelerate();
}

double Car::getEngineVolume()
{
	return engineObject.getVolume();
}

string Car::getTireSize()
{
	return tireObjects[0].getSize();
}




Engine::Engine(double engineVolume)
	:engineVolume(engineVolume)
{

}

void Engine::startEngine()
{
	cout << "Starting engine..." << endl;
}
void Engine::accelerate()
{
	cout << "Accelelerating..." << endl;
}

double Engine::getVolume()
{
	return engineVolume;
}


Tire::Tire(string size)
	:tireSize(size)
{

}

string Tire::getSize()
{
	return tireSize;
}

void Tire::inflateTire(int psi)
{
	cout << "Inflating driver side rear tire to 32 psi..." << endl;
}


void Door::openDoor()
{
	cout << "Opening Door..." << endl;
}


void Window::rollDown()
{
	cout << "Rolling down window..." << endl;
}