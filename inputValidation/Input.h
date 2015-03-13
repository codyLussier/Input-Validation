//Input class
#include <iostream>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "inputValidation.h"
using namespace std;

class Input
{
public:

	string input;
	InputValidation validate;

private:

	void InputMenu();
	Input();
	~Input();

};