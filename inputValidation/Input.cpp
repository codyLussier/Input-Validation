#pragma once
#include "Input.h"

Input::Input()
{

}

Input::~Input()
{

}

void Input::InputMenu()
{
	char menu;
	bool exit = false;
	char skip;

	printf("Would you like to add another entry or see the current entries\n");
	printf("a for add another entry or s for seeing current entries\n");
	cin >> menu;

	switch (menu)
	{
	case 'a':

		do
		{
			//logic is flawed
			validate.PhoneNum;
			printf("Would You like to leave the field blank?\n");
			printf("y for yes, n for no");
			cin >> skip;

			if (skip == 'y')
			{
				exit = true;
			}

		} while (exit == false);

		break;

	case 's':

		break;
	}


	return;
}