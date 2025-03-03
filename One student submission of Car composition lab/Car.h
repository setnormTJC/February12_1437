#pragma once

#include<string>

using namespace std;


class Engine
{
private:
    double engineVolume;

public:
    Engine(double engineVolume);

    void startEngine();
    void accelerate();
    double getVolume();
};

class Tire
{
private:
    string tireSize;

public:
    Tire(string size);

    void inflateTire(int psi);
    string getSize();
};

class Window
{
    //int windowWidth; 
public:
    void rollDown();
};

class Door
{
public:
    Window windowObject;
    void openDoor();
};

class Car
{
private:
    Engine engineObject;
    Tire   tireObjects[4]; //static, C-style array (related to POINTERS (memory addresses))
    Door   driverDoor;
    Door   passengerDoor;
    string tireSize;

public:
    Car(double engineVolume, string tireSize);

    void beginDrive();
    double getEngineVolume();
    string getTireSize();
};
