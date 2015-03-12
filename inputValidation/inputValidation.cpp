
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;


int main()
{
	char text[81];
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

	}

	else
		cout << "Phone number is invalid";


	int stop;
	cin >> stop;


}