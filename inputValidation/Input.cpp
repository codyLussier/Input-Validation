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
	int ret;
	char menu;
	bool exit = false;
	char skip;

	//temp variables
	string name;

	printf("Would you like to add another entry or see the current entries\n");
	printf("a for add another entry or s for seeing current entries\n");
	cin >> menu;

	switch (menu)
	{
	case 'a':

		do //for name
		{

			printf("Please Enter Your Name?\n");
			getline(cin, name);

			ret = validate.validateName(name);

			switch (ret)
			{
			case 1:
				printf("")
				printf("y for yes, n for no");
				cin.ignore; //clears buffer
				cin >> skip;

				if (skip == 'y')
				{
					exit = true;
				}

			}

		} while (exit == false);

		do //for address
		{

			printf("Please Enter Your Name?\n");
			getline(cin, name);

			ret = validate.validateName(name);

			switch (ret)
			{
			case 1:
				printf("")
					printf("y for yes, n for no");
				cin.ignore; //clears buffer
				cin >> skip;

				if (skip == 'y')
				{
					exit = true;
				}

			}

		} while (exit == false);

		break;

	case 's':

		break;
	}


	return;
}