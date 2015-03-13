#include "inputValidation.h"
#pragma once

int InputValidation::PhoneNum()
{
	char text[80];
	cout << "Enter phone number:";
	cin.getline(text, 81);

	char numbers[15] = { " 0123456789()-" };

	int size_of = strlen(text);


	int counter = 0;

	for (int a = 0; a<size_of; a++)
	{
		for (int b = 0; b<14; b++)
		{
			if (text[a] == numbers[b])
			{
				counter++;
			}
		}
	}

	if (counter == size_of)
	{
		cout << "Phone number is valid";
		return 0; //standard return code for normal situation

	}

	else
		cout << "Phone number is invalid";
		return -1; //return code for exceptions

	int stop;
	cin >> stop;

}

int InputValidation::Name(char * text)
{


}


int InputValidation::StreetAddress(char * text)
{


}


int InputValidation::City(char * text)
{


}


int InputValidation::Province(char * text)
{


}


int InputValidation::PostalCode(char * text)
{


}
