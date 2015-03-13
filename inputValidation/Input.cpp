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
	string address;

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

			ret = validate.validateName(name.c_str());

			switch (ret)
			{
			case 1:
				printf("Would you like to skep this field and leave it empty\n");
				printf("y for yes, n for no");
				cin.ignore; //clears buffer
				cin >> skip;

				if (skip == 'y')
				{
					exit = true;
				}
				break;

			case 0:
				break;

			}

		} while (exit == false);

		exit = false;

		do //for address
		{

			printf("Please Enter Your Address?\n");
			getline(cin, address);

			ret = validate.validateAddress(address);

			switch (ret)
			{
			case 1:
				printf("Would you like to skep this field and leave it empty\n");
				printf("y for yes, n for no\n");
				cin.ignore; //clears buffer
				cin >> skip;

				if (skip == 'y')
				{
					exit = true;
				}
			case 0:
				break;
			}

		} while (exit == false);

		break;

	case 's':

		break;
	}


	return;
}