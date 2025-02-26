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


	int totalLineCount = 0;
	while (!fin.eof())
	{
		std::getline(fin, currentLine);
		totalLineCount++; 
		//std::cout << currentLine << "\n";

		//what to 0do now?
		
		if (totalLineCount % 50 == 0)
		{
			//... to be completed later
		}
		Page currentPage; 

		int numberOfLinesInCurrentPage = 0; 

		while (numberOfLinesInCurrentPage < Page::maxNumberOfLines)
		{
			currentPage.theLinesInThePage.at(numberOfLinesInCurrentPage)
				= currentLine;

			numberOfLinesInCurrentPage++; 
		}
	}

	fin.close(); 
}
