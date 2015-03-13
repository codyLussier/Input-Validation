#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

class InputValidation
{

private:
	int PhoneNum();
	int StreetAddress(char * text);
	int InputValidation::PostalCode(char * text);
	int InputValidation::Province(char * text);
	int InputValidation::City(char * text);
	int InputValidation::Name(char * text);
};
