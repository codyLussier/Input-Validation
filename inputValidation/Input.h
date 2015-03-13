//Input class
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
public:

	string input;
	AddressBookData addressBook[10];
	InputValidation validate; //no linked from header :: validate class variable
	Input();
	~Input();

	void InputMenu();

};