// SomeComposition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>


class Nose
{
    int noseLength; 
};

class Tail
{
    bool tailIsBushy; 
};

class Dog
{
    Nose dogsNose; 
    Tail dogsTail; 
    std::string dogsName; 
};

class Human
{
    Nose humansNose; 
    std::string personsName; 
};

class Appliance
{
//private: 
public: 
    std::string applianceName;
    int numberOfAmpsRequired; //ex: 5 amps, 10 amps, 1 amp for overhead light
    enum class ApplianceSize
    {
        Small = 1,
        Medium = 2, 
        Large = 3
    };


    //string size; //limit these to small, medium large:
};

class Refrigerator : public Appliance //a fridge "is-a" type of Appliance
{
    int minimumFreezerTemperature; //ex: 0 degrees Fahrenheit

    std::string fridgeBrand; 
};

class Kitchen
{
    std::vector<Appliance> listOfAppliances; //this will create an EMPTY list of appliances {}
    //THIS means a kitchen is COMPOSED OF appliances 
    int squareFootage; 
    std::string wallColor; 

public: 
    Kitchen()
    {
        std::cout << "Called the default constructor of the `Kitchen` class\n";

        std::cout << "Let's get you to enter the information on the APPLIANCES in your kitchen:\n";
        std::cout << "First, how many ya got?\n";
        int totalNumberOfAppliances; 
        
        std::string response; 
        std::getline(std::cin, response);

        totalNumberOfAppliances = std::stoi(response); 

        listOfAppliances.resize(totalNumberOfAppliances); //this makes space for the required number of appliances
        for (int i = 0; i < totalNumberOfAppliances; ++i)
        {
            std::cout << "Enter the appliance number " << i << " name:\n";
            std::getline(std::cin, listOfAppliances[i].applianceName); 

            std::cout << "Enter the number of AMPS required: \n";
            std::cin >> listOfAppliances[i].numberOfAmpsRequired; //reads in \n as the last character

            std::cin.ignore(); 
        }
    }

    void printKitchenStuff()
    {

    }
};

int main()
{
    Kitchen myKitchen;


}
