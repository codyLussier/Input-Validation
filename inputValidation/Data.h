/*
Data.h
Assignment 4
Cody Lussier, Birju Patel, Brandon Erb, zumhliansanglungler,
Date: March 11, 2014
Description : Structure for the address book entry data
*/

#include <stdio.h>
using namespace std;

typedef struct ADDRESSBOOKDATA
{
	char name[30];
	char streetAddress[60];
	char city[60];
	char province[2];
	char postalCode[6];
	char phoneNumber[10];
} AddressBookData;