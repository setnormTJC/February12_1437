#pragma once

#include<array>
#include<fstream>
#include<iostream>
#include <string>
#include <vector>

struct Page
{
public: 
	static const int maxNumberOfLines = 50;//assuming a particular font size and page length and width 

	//use a STATIC array of lines (strings)...
	std::array<std::string, maxNumberOfLines> theLinesInThePage; 

	//Page()

};

class Book
{
	std::vector<Page> pages; //PLURAL because presumably, book will have > 1 page

public: 
	Book() = delete; //disallow using a default constructor (one which has no params)

	Book(const std::string& bookFileName); 


};

