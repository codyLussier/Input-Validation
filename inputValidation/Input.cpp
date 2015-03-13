/*
Input.cpp
Assignment 4
Cody Lussier, Birju Patel, Brandon Erb, zumhliansanglungler,
Date: March 11, 2014
Description : Test harness For testing a file should be loaded instead of manual inputing boundry tests... etc
*/

#pragma once
#include "Input.h"

Input::Input()
{

}

Input::~Input()
{
	delete addressBook;
}

/*
Name: Input Menu
Parameters: none
Return value: void
Descriptions: The method that is the menu for the program, it takes input in and after that displays the output
*/
void Input::InputMenu()
{
	int ret; //for return values of validation functions
	char menu;
	bool exit = false;
	bool done = false;
	char skip;

	//temp variables
	string name;
	string address;
	string city;
	string province;
	string postalCode;
	string phoneNumber;

	do
	{
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
					printf("Please Enter a valid entry\n");
					break;

				case 0:
					strcpy (addressBook[i].name, name.c_str);
					exit = true;
					break;

				}
				cin.ignore;

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
						strcpy (addressBook[i].streetAddress, "");
					}
					else if (skip == 'n')
					{
						exit == false;
					}
					else
					{
						printf("Invalid input you must enter y or n\n");
					}
					
					break;
				case 0:
					strcpy(addressBook[i].streetAddress, address.c_str);
					exit = true;
					break;
				}

			} while (exit == false);

			exit = false;

			do //for city
			{

				printf("Please Enter Your City?\n");
				getline(cin, city);

				ret = validate.validateCity(city);

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
						strcpy(addressBook[i].city, "");
					}
					else if (skip == 'n')
					{
						exit == false;
					}
					else
					{
						printf("Invalid input you must enter y or n\n");
					}

					break;
				case 0:
					strcpy(addressBook[i].city, city.c_str);
					exit = true;
					break;
				}

			} while (exit == false);

			exit = false;

			do //for Province province
			{

				printf("Please Enter Your Province?\n");
				getline(cin, address);

				ret = validate.validateProvince(province);

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
						strcpy(addressBook[i].province, "");
					}
					else if (skip == 'n')
					{
						exit == false;
					}
					else
					{
						printf("Invalid input you must enter y or n\n");
					}

					break;
				case 0:
					strcpy(addressBook[i].province, province.c_str);
					exit = true;
					break;
				}

			} while (exit == false);

			exit = false;


			do //for PostalCode postalCode
			{

				printf("Please Enter Your Postal Code?\n");
				getline(cin, postalCode);

				ret = validate.validatePostalCode(postalCode);

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
						strcpy(addressBook[i].postalCode, "");
					}
					else if (skip == 'n')
					{
						exit == false;
					}
					else
					{
						printf("Invalid input you must enter y or n\n");
					}
					break;
				case 0:
					strcpy(addressBook[i].postalCode, postalCode.c_str);
					exit = true;
					break;
				}

			} while (exit == false);

			exit = false;

			do //for Phone Number phoneNumber
			{

				printf("Please Enter Your Postal Code?\n");
				getline(cin, phoneNumber);

				ret = validate.validatePhoneNumber(phoneNumber);

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
						strcpy(addressBook[i].phoneNumber, "");
					}
					else if (skip == 'n')
					{
						exit == false;
					}
					else
					{
						printf("Invalid input you must enter y or n\n");
					}
					break;

				case 0:
					strcpy(addressBook[i].phoneNumber, phoneNumber.c_str);
					exit = true;
					break;
				}

			} while (exit == false);

			//exit single entry loop
			i++;
			break;

		case 's':
			done == true;
			break;
		}

	} while (done == false);

	Display();

	return;
}



/*
Name: Display
Parameters: none
Return value: void
Descriptions: The method displays the contents of the address book.
*/
void Input::Display()
{

	int scroll = 1;

	system("cls");

	for (int j = 0; j < (i + 1); j++)
	{
		if ((scroll % 3 == 0) && scroll != 0)
		{
			printf("Press any key to see next page of entries");
			getchar();
			system("cls");
		}

		printf("%s\n", addressBook[i].name);
		printf("%s\n", addressBook[i].streetAddress);
		printf("%s,%s,%s\n", addressBook[i].city, addressBook[i].province, addressBook[i].postalCode);
		printf("%s\n", addressBook[i].phoneNumber);
		printf("++++++++++++\n\n");
		scroll++;

	}

	return;
}