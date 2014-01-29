// yeabuddy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
		double	T,t,m;
	printf	("Enter hours and minutes since power outage:\n");
	scanf	("%lf%lf", &t,&m);
	t	=	t	+	(m/60);
	T	=	(4*(t*t)/(t+2))-20;
	printf	("It has been %lf hours since the power outage. \nThe approximate temperature of your freezer now is %lf degrees Celcius \n",t, T);
	return 0;
}

