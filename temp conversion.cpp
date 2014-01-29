// yea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	double	fahrenheit, celsius;
	printf	("Enter the temperature in fahrenheit>");
	scanf	("%lf"	,	&fahrenheit);
	celsius =	((double)5	/	9)	*	(fahrenheit-32);
		
	printf ("That equals %f degrees Celsius. \n", celsius);
	return 0;
}

