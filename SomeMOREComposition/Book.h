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

};

class Book
{
private: 

public: 
	std::vector<Page> pages; //PLURAL because presumably, book will have > 1 page

	Book() = delete; //disallow using a default constructor (one which has no params)

	/*Parameterized constructor*/
	Book(const std::string& bookFileName); 

	void printARandomPage(int randomPageNumber); 

};

