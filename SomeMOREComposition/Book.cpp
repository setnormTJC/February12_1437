#include "Book.h"

Book::Book(const std::string& bookFileName)
{
	std::ifstream fin{ bookFileName };

	if (!fin.is_open())
	{
		std::cout << "FNFE\n";
		return; 
	}

	std::string currentLine; 

	int lineCounter = 0;
	while (!fin.eof())
	{
		Page currentPage;

		while (lineCounter < Page::maxNumberOfLines)
		{
			std::getline(fin, currentLine);
			currentPage.theLinesInThePage[lineCounter] = currentLine;
			lineCounter++;

			//std::cout << currentLine << "\n";

		}

		//reset lineCounter to 0 and push currentPage into list of pages: 
		lineCounter = 0; 

		pages.push_back(currentPage);

	}

	fin.close(); 
}

void Book::printARandomPage(int randomPageNumber)
{
	//an example of a "using alias": 
	//using linesInPage = Book::pages[randomPageNumber].theLinesInThePage; 

	
	for (const std::string& currentLineInPage : pages[randomPageNumber].theLinesInThePage)
	{
		std::cout << currentLineInPage << "\n";
	}
}



