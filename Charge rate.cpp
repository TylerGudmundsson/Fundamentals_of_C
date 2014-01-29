// Charge rate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>


int _tmain(int argc, _TCHAR* argv[])

{
	int units;
	double charge;

	printf("Enter number of units to be consumed>");
	scanf("%d", &units);
	if(units>=0 && units<=200)
	{ 
		charge = units * .5;
		printf("\nYou will be charged $%.2lf", charge);
	}
	else if(units>=201 && units<401)
	{
		charge = (units * .65)+100;
		printf("\nYou will be charged $%.2lf", charge);
	}
	else if(units>=401 && units<601)
	{
		charge = (units * .8)+230;
		printf("\nYou will be charged $%.2lf", charge);
	}
	else if(units>=601)
	{
		charge = (units * 1.25)+425;
		printf("\nYou will be charged $%.2lf", charge);
	}
	else 
	{
		printf("\nDon't be cheap, buy something");
	}
	getch();
	return 0;
}

