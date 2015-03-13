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
	int ret; //for return values of validation functions
	char menu;
	bool exit = false;
	bool done = false;
	char skip;
	int i = 0;

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
					break;
				case 0:
					strcpy(addressBook[i].streetAddress, address);
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
					break;
				case 0:
					strcpy(addressBook[i].phoneNumber, phoneNumber.c_str);
					exit = true;
					break;
				}

			} while (exit == false);

			exit = false;

			//exit input loop
			break;

		case 's':
			done == true;
			break;
		}

	} while (done == false);

	//now display

	return;
}