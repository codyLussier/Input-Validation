#pragma once
#include "Input.h"


class Input
{
public:
	string input;

private:

	void InputMenu()
	{

		printf("Would you like to add another entry or ee the current entries");
		getline(cin, input);

		return;
	}

};