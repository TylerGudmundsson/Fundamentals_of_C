// Population.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void population (int);

int _tmain(int argc, _TCHAR* argv[])
{	int A;
	printf("Enter a year after 1990> ");
	scanf("%d", &A);
	population (A);
	return 0;
}
void	population ( int c)

{ double d;
	printf("The predicted population for Gotham City in %d is %7.3lf (in thousands)\n",  c,52.966	+	2.18*(c-1990));
	return;
}



