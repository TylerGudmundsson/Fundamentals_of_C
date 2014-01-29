// Pythagoren Formula.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <math.h>


int _tmain(int argc, _TCHAR* argv[])
{
	double	a,b,c;
		printf	("Enter length of side a and b:\n");
			scanf	("%lf%lf",&a,&b);
			c	=	pow(pow(a,2)+pow(b,2),0.5);
			printf	("The length of side c is %lf",c);

	return 0;
}

