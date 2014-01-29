// new temp.cpp : Defines the entry point for the console application.
//

#include <stdio.h>


int main()
{
	float	T,t,m,h;
	char tt[2];
		printf	("Enter the number of hours since the power outage:");
		scanf	("%f", &h);
		printf	("Enter the number of minutes since the power outage:");
		scanf	("%f", &m);
		t = m / 60;
		t = t + h;
		h = t;
		t = t * t;
		t = 4 * t;
		h = h+2;
		T	=	(t / h) - 20;
		printf	("The temperature of your fridge is currently %f degrees Celcius:	\n", T);
		tt[0] = getchar();
	return 0;
}

