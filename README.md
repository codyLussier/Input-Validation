
# include <iostream>
# include <string.h>
# include <ctype.h>

using namespace std;

# pragma warning (disable : 4996)

class inputValidation
{
public:
	void validateName(char *name);
	void validateStreetAddress(char *name);
	int  validateProvince(char *province);
	int  validateCity(char *city);
};


void inputValidation::validateName(char *name)
{
	//int retcode = 0;
	if (name[0] == '\n')
	{
		printf("CR \n");
	}
	if (strlen(name) > 30)
	{
		printf("Error : Name too long! \n");
	}
	if (name[0] == '-' || name[0] == ' ' || name[0] == '\'' || name[0] == '.')
	{
		printf("Error : Name can not begin with %c \n", name[0]);
	}

	for (int i = 0; i < (strlen(name)); i++)
	{
		if (isdigit(name[i]))
		{
			printf("Error: Name can not contain numbers! \n");
		}
		if ((isalpha(name[i]) == 0) && (isalpha(name[i++]) == 0))
		{
			printf("Error : No more than one non - alphabetic character in a sequence! \n");
		}
	}
	if (name == NULL)
	{
		printf("Error : Field can not be blank! \n");
	}
	printf("Okay");
}

void inputValidation::validateStreetAddress(char *name)
{
	if (strlen(name) > 60)
	{
		printf("Error : Street name too long! \n");
	}
	if (name[0] == ' ' || name[0] == '-' || name[0] == '\'' || name[0] == '.')
	{
		printf("Error : Street address cannot begin with %c \n", name[0]);
	}
	for (int i = 0; i < (strlen(name)); i++)
	{
		if ((isalpha(name[i]) == 0) && (isalpha(name[i++]) == 0))
		{
			printf("Error : No more than one non - alphabetic character in a sequence! \n");
		}
	}

	char *houseN = NULL;
	char *streetName = NULL;
	char *streetType = NULL;
	char *direction = NULL;

	streetName = strchr(name, ' ');
	streetName = '\0';
	streetName++;

	streetType = strchr(streetName, ' ');
	streetType = '\0';
	streetType++;

	direction = strchr(streetType, ' ');
	direction = '\0';
	direction++;

	printf("%s \n", name);
	printf("%s \n", streetName);
	printf("%s \n", streetType);
	printf("%s \n", direction);


}


int inputValidation::validateProvince(char *province)
{
	if (strlen(province) >2)
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

int inputValidation::validateCity(char *city)
{
	if (strlen(city) > 60)
	{
		printf("Error : City name too long ! \n");
	}
	if (city[0] == ' ' || city[0] == '-' || city[0] == '\'' || city[0] == '.')
	{
		printf("Error : City name can not begin with (%c) \n", city[0]);
	}
	for (int i = 0; i < strlen(city); i++)
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

int main(void)
{
	inputValidation ob;
	char *name = "Kitchener123";
	ob.validateCity(name);
	return 0;
}
