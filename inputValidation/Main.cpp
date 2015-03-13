//Test harness
//For testing a file should be loaded instead of manual inputing boundry tests... etc

#include <stdio.h>
using namespace std;
#include "Input.h"
#pragma once

int main()
{

	//***errors from bad constructor***///
	//Istantiate Input class
	Input addressBookInput;

	printf("Welcome to Address Book by Cody Lussier, Birju Patel, Brandon Erb, Brodie Paterson");
	//Call menu
	addressBookInput.InputMenu;

	return 1;
}