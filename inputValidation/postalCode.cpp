/*
Programmer: zumhliansanglungler
Date: March 13, 2015
Description: This Program take user input as string and validate the user input with candian postalcade format.
It has multiple function that does validation checking genericly. First it check for the alphabetic of the input.
Second function check for length, third check for space and last check for the valid numbers.
Switch statement is use heavily for distinguishing the format.
constant array of valid characters are use for comparing the user input.
*/
#include<iostream>
#include<string>
#include<cctype>

using namespace std;
//The character lengths fixed.
#define kmaxLength 7
#define kminimumLength 6

//constant array letters length to compare
#define kfirst 18
#define ksecond 20

//Function prototype for validating the input
bool checkLetters(const char* letters, char original, int length);
bool checkLength(int maximum, int minimum, int lengthToCheck);
bool checkSpace(char original);
bool checkNumbers(char numToCheck);
bool getPostalCode(string inputPostal);

int main(void)
{
	bool set = true;

	//take the user input as a string.
	if (set == getPostalCode("N2M YL3"))
	{
		printf("success");
	}
	else
	{
		printf("fail");
	}
	return(0);
}

/*
Function: getPostalCode()
Pramaeter: string inputPostal
return: set
Description: This function take the user input as a string and validate the format with each characters.
Switch statement take user input base on character numbers length.
*/
bool getPostalCode(string inputPostal)
{
	const char secondLetters[ksecond] = { 'A', 'B', 'C', 'E', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z' };
	const char firstLetters[kfirst] = { 'A', 'B', 'C', 'E', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'R', 'S', 'T', 'V', 'X', 'Y' };

	//take the constant string and convert it to c string
	const char* postalCode = inputPostal.c_str();
	bool set = false;
	bool spaceSet = false;
	int count = 0;

	//take the input string length
	int length = (int)inputPostal.size();

	//check for the length is valid or not
	if (set != checkLength(kmaxLength, kminimumLength, length))
	{
		//parse the string into one characters
		for (count = 0; count < length; count++)
		{

			//each switch case represent the character position that the string has
			switch (count)
			{
			case 0:

				if (set == checkLetters(firstLetters, postalCode[count], kfirst))
				{
					count = length;
				}


				break;

			case 1:
				if (set == checkNumbers(postalCode[count]))
				{
					count = length;
				}

				break;


			case 2:

				if (set == checkLetters(secondLetters, postalCode[count], ksecond))
				{
					count = length;
				}

				break;


			case 3:
				//check for the space if success check for the maximum length
				if (set != checkSpace(postalCode[count]))
				{
					if (set == checkLength(kmaxLength, kmaxLength, length))
					{
						count = length;
					}
					else
					{
						spaceSet = true;
					}
				}
				else
				{
					//check for the minimum length
					if (set == checkLength(kminimumLength, kminimumLength, length))
					{
						count = length;
					}
					else
					{
						//check for the numbers is valid or not
						if (set == checkNumbers(postalCode[count]))
						{
							count = length;
						}

					}
				}
				break;
			case 4:

				//check for the space is present or not
				if (spaceSet == false)
				{
					//check for the letters
					if (set == checkLetters(secondLetters, postalCode[count], ksecond))
					{
						count = length;
					}

				}
				else
				{
					//check for the numbers
					if (set == checkNumbers(postalCode[count]))
					{
						count = length;
					}

				}
				break;
			case 5:
				//check for the space again
				if (spaceSet == false)
				{
					//check for the valid numbers
					if (set == checkNumbers(postalCode[count]))
					{
						count = length;
					}
					else
					{
						//set is true because the six postion must validate the set
						set = true;
					}
				}
				else
				{
					//check for valid letters and check if the letters length is complete or not
					if (set == checkLetters(secondLetters, postalCode[count], ksecond))
					{
						count = length;
					}
					else
					{
						set = true;
					}
				}
				break;
			case 6:
				set = false;
				//check for the number position 
				if (set == checkNumbers(postalCode[count]))
				{
					count = length;
				}
				else
				{
					set = true;
				}
				break;

			default:

				break;
			}
		}

	}

	return(set);
}



/*
Function: checkLetters()
Pramaeter: const char* letters, char original, int length
return: set
Description: This function take each character from string and validate the input is letters or not.
The for loop take the characters and compare with the constant characters.
*/
bool checkLetters(const char* letters, char original, int length)
{
	bool set = false;
	int countLetters = 0;

	for (countLetters = 0; countLetters < length; countLetters++)
	{
		if (original == letters[countLetters])
		{
			set = true;
			break;
		}

	}
	return(set);

}


/*
Function: checkSpace()
Pramaeter: char original
return: set
Description: This function take each character from string and validate the input has space or not.
If function is use.
*/
bool checkSpace(char original)
{
	bool set = false;

	if (isspace(original) != 0)
	{
		set = true;
	}

	return(set);
}

/*
Function: checkNumbers()
Pramaeter: char numToCheck
return: set
Description: This function take each character from string and validate the input is number characters between 0-9.
*/
bool checkNumbers(char numToCheck)
{

	bool set = false;

	if ((numToCheck <= '9') && (numToCheck >= '0'))
	{
		set = true;

	}


	return(set);
}


/*
Function: checkLength()
Pramaeter: int maximum, int minimum, int lengthToCheck
return: set
Description: This function take the string length and check for the range 6-7 characters
*/
bool checkLength(int maximum, int minimum, int lengthToCheck)
{
	bool set = false;
	if ((lengthToCheck <= maximum) && (lengthToCheck >= minimum))
	{
		set = true;
	}
	return(set);
}
