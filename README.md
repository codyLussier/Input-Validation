# Input-Validation


# include <iostream>
# include <string>
# include <ctype.h>
# include <iomanip>

using namespace std;

# pragma warning (disable : 4996)



int validateName(string name)
{
	//int retcode = 0;
	if (name[0] == '\n')
	{
		return 1;
	}
	if (name.length() > 30)
	{
		printf("Error : Name too long! \n");
		return 2;
	}
	if (name[0] == '-' || name[0] == ' ' || name[0] == '\'' || name[0] == '.')
	{
		printf("Error : Name can not begin with %c \n", name[0]);
		return 2;
	}

	for (int i = 0; i < name.length() - 1; i++)
	{
		if (isdigit(name[i]))
		{
			printf("Error: Name can not contain numbers! \n");
			return 2;
		}
		if ((isalpha(name[i]) == 0) && (isalpha(name[i++]) == 0))
		{
			printf("Error : No more than one non - alphabetic character in a sequence! \n");
			return 2;
		}
		if (name[i] != ' ' && name[i] != '-' && name[i] != '\'' && name[i] != '.' && (isalpha(name[i]) == 0))
		{
			printf("Error : Character (%c) not allowed in City name. \n", name[i]);
		}
	}
	if (name == " ")
	{
		printf("Error : Field can not be blank! \n");
		return 2;
	}
	return 0;
}

void validateStreetAddres(string address)
{
	if (address.length() > 60)
	{
		printf("Error : Street name too long! \n");
	}
	if (address[0] == ' ' || address[0] == '-' || address[0] == '\'' || address[0] == '.')
	{
		printf("Error : Street address cannot begin with %c \n", address[0]);
	}
	for (int i = 0; i < (address.length()); i++)
	{
		if ((isalpha(address[i]) == 0) && (isalpha(address[i++]) == 0))
		{
			printf("Error : No more than one non - alphabetic character in a sequence! \n");
		}
		if (address[i] != ' ' && address[i] != '-' && address[i] != '\'' && address[i] != '.' && (isalpha(address[i]) == 0))
		{
			printf("Error : Character (%c) not allowed in City name. \n", address[i]);
		}
	}

}


int validateProvince(string province)
{
	if (province.length() >2)
	{
		printf("Error : Too many characters! \n");
	}

	string validProvinces[13] = { "ON", "BC", "QC", "AB", "MB", "NB", "NL", "NS", "NT", "NU", "PE", "SK", "YT" };

	for (int i = 0; i < 13; i++)
	{
		if (province != validProvinces[i])
		{
			return 1;

		}
		else
		{
			return 0;
		}
	}
	if (province[0] == '\n')
	{
		return 1;
	}
}

int validateCity(string city)
{
	if (city.length() > 60)
	{
		printf("Error : City name too long ! \n");
	}
	if (city[0] == ' ' || city[0] == '-' || city[0] == '\'' || city[0] == '.')
	{
		printf("Error : City name can not begin with (%c) \n", city[0]);
	}
	for (int i = 0; i < city.length(); i++)
	{
		if (isdigit(city[i]))
		{
			printf("Error : City name can not contain numbers. \n");
		}
		if ((city[i] == ' ') && (city[i++] == ' '))
		{
			printf("Error : City name can not have more than one space in a row.\n");
		}
		if (city[i] != ' ' && city[i] != '-' && city[i] != '\'' && city[i] != '.' && (isalpha(city[i]) == 0))
		{
			printf("Error : Character (%c) not allowed in City name. \n", city[i]);
		}
	}
	return 0;

}

