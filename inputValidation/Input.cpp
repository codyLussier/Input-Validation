#pragma once
#include "Input.h"


Input::Input()
{


}

Input::Input()
{


}


void Input::InputMenu()
{

	printf("Would you like to add another entry or see the current entries");
	getline(cin, input);

	//to convert a string to char* use string.c_str()

	return;
}
