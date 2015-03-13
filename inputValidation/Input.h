//Input class
#include <iostream>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "inputValidation.h"
#include <string>
using namespace std;

class Input
{
public:

	string input;
	InputValidation validate; //no linked from header

private:

	void InputMenu();
	Input();
	~Input();

};