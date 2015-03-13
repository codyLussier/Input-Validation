/*
Input.h
Assignment 4
Cody Lussier, Birju Patel, Brandon Erb, zumhliansanglungler,
Date: March 11, 2014
Description : Header containing prototypes for the input output class
*/

#include <iostream>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "inputValidation.h"
#include <string>
#include "Data.h"
using namespace std;

class Input
{
private:
	string input;
	AddressBookData * addressBook = new AddressBookData[10];
	int i = 0;

public:

	InputValidation validate; //no linked from header :: validate class variable
	Input();
	~Input();

	void InputMenu();
	void Display();

};