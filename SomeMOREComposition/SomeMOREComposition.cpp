// SomeMOREComposition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"Book.h"

#include<random> 

int main()
{
	//absolute filepath : "C:/Users/name/Desktop/filename.ext"
	std::string bookFilename = "lesMiserables.txt"; //an example of a "relative" filepath 

	Book lesMis(bookFilename);


	std::random_device rd; 
	std::mt19937 rng(rd()); //let's treat this as a "black box" (but MT means "Mersenne Twister") 
	//and 19,937 is a PRIME number

	while (true)
	{
		int randomPageNumber = rng() % lesMis.pages.size();

		std::cout << "Printing page number: " << randomPageNumber << "\n";

		lesMis.printARandomPage(randomPageNumber);

		std::cout << "\n\nPress any key to continue\n";
		std::cin.get(); //

		system("CLS");
	}


}

